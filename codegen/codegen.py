from parse_glspec import parse_spec
from pathlib import Path 



cwd = Path.cwd().absolute()
spec_name = "core"
spec_input = cwd.joinpath("_glspec/v4_6/glcorearb.h")
spec_cache = cwd.joinpath("_codegen/_glcache/v4_6")
parse_spec(spec_input, spec_name, spec_cache)


class ContextFunctionArg:
	
	def as_declaration_arg(self) -> str:
		return f"{self.type} {self.name}" 
	
	def __init__(self, name, type):
		self.name : str = name
		self.type : str = type

class ContextFunction:

	def as_declaration(self) -> str :
		strargs = []
		for v in self.args:
			strargs.append(v.as_declaration_arg())
		args_str = ", ".join(strargs)
		name = self.name.removeprefix("gl")
		
		lines = []
		header = f"{self.fore_mods} {self.return_type} APIENTRY {name} ({args_str}) {self.post_mods}".strip()
		lines.append(header)
		
		if len(self.body) != 0:
			lines.append("\t{")
			for v in self.body:
				lines.append("\t" + v)
			lines.append("\t}")
		
		return "\n".join(lines)

	def arg_names(self) -> "list[str]" :
		o = []
		for v in self.args:
			o.append(v.name)
		return o

	def __init__(self, name, return_type, args : "list[ContextFunctionArg]"):
		self.name : str = name
		self.return_type : str = return_type
		self.args : "list[ContextFunctionArg]" = args
		self.fore_mods = ""
		self.post_mods = "const noexcept"
		self.body = []

class ContextType:

	def generate_context_class(self, classname) -> str:
		code_lines = [""]
		code_lines.append(f"struct {classname}")
		code_lines.append("{")
		for v in self.functions:
			fdecl = v.as_declaration()
			code_lines.append(f"\t{fdecl};")
		code_lines.append("")
		code_lines.append(f"\t{classname}() = default;")
		code_lines.append("};")
		code = "\n".join(code_lines)
		return code

	def redirect_to_prototypes(self):
		for v in self.functions:
			args = v.arg_names()
			args_str = ", ".join(args)
			v.body.clear()
			v.body.append(f"\treturn {v.name}({args_str});")


	def __init__(self, version):
		self.functions : "list[ContextFunction]" = []
		self.version = version

extension_suffixes = [ "OVR", "NV", "EXT", "ARB", "AMD", "MESA", "INTEL", "KHR" ]


def create_context_type(version,
	disabled_extensions : "list[str]" = extension_suffixes):

	context = ContextType(version)
	functions_path =  spec_cache.joinpath(f"{version}/functions.glspec")
	file = open(functions_path, "r")
	lines = file.readlines()
	file.close()
	for v in lines:
		return_type, api_entry, function_name, function_args = v.split(";")

		skip_function = False
		for ext in disabled_extensions:
			if function_name.endswith(ext):
				skip_function = True
				break

		if skip_function:
			continue

		function_args = function_args.strip().removesuffix(")").removeprefix("(").split(",")
		split_args = []
		for function_arg in function_args:
			farg_name, _, farg_type = function_arg.partition(":")
			split_args.append(ContextFunctionArg(farg_name, farg_type))
		context.functions.append(ContextFunction(function_name, return_type, split_args))
	return context

context_objects = []
context_versions = [
	"1_0",
	"1_1",
	"1_2",
	"1_3",
	"1_4",
	"1_5",
	
	"2_0",
	"2_1",

	"3_0",
	"3_1",
	"3_2",
	"3_3",

	"4_0",
	"4_1",
	"4_2",
	"4_3",
	"4_4",
	"4_5",
	"4_6",
]

context = ContextType("4_6")

for v in context_versions:
	context_objects.append(create_context_type(v))

for v in context_objects:
	context.functions.extend(v.functions)



	
file = open("_codegen/test_context.hpp", "w")
file.write("#pragma once\n\n")
file.write("#include <cppopengl/detail/gl.hpp>\n\n")
file.write("namespace gl\n{\n")

context.redirect_to_prototypes()
context_code = context.generate_context_class("context")
file.write(context_code)
file.write("\n\n")

file.write("};\n")
file.close()
