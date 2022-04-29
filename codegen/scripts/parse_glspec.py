from pathlib import Path
import os
import re


function_argument_type_split_regex = re.compile("[a-zA-Z0-9_]*[\* &]?")
def split_cpp_variable_type_signature(varsig : str) -> "list[str]" :
	parts = function_argument_type_split_regex.findall(varsig)
	fixed_parts = []
	for v in parts:
		v = v.strip()
		if len(v) != 0:
			if len(v) > 1 and v.endswith("*"):
				fixed_parts.append(v.removesuffix("*"))
				fixed_parts.append("*")
			else:
				fixed_parts.append(v)
	return fixed_parts

class GLSpec:

	class GLConstant:
		def __init__(self, name, value):
			self.name = name
			self.value = value
		def __str__(self):
			return self.name + " " + self.value

	class GLFunctionArg:
		def __init__(self, name, type):
			self.name = name
			self.type = type
		def __str__(self):
			return self.name + ":" + self.type

	class GLFunction:
		def __init__(self, name, returnType, fn_args):
			self.name = name
			self.return_type = returnType
			self.args = []
			for v in fn_args:
				arg_str = v.strip()
				arg_parts : "list[str]" = split_cpp_variable_type_signature(arg_str)
				arg_name = arg_parts.pop(len(arg_parts) - 1)
				arg_type = " ".join(arg_parts)

				farg = GLSpec.GLFunctionArg(arg_name.strip(), arg_type.strip())
				self.args.append(farg)


		def __str__(self):
			strargs = []
			for v in self.args:
				strargs.append(str(v))
			arg_str = ",".join(strargs)
			return f"{self.return_type};APIENTRY;{self.name};({arg_str})"

	class GLVersion:
		def __init__(self):
			self.version : str = ""
			self.functions : "list[GLSpec.GLFunction]" = []
			self.constants : "list[GLSpec.GLConstant]" = []

	class ParsedSpec:
		def __init__(self, name, path):
			self.versions : "list[GLSpec.GLVersion]" = []
			self.name : str = name
			self.path : str = path

	def parse(self, path):

		parsed_spec = GLSpec.ParsedSpec(self.profile, path)

		parsed_versions : "list[GLSpec.GLVersion]" = []
		parsing_version : GLSpec.GLVersion = None

		parsed_comment_blocks : "list[list[str]]" = []
		parsing_comment_block : "list[str]" = []

		lines : "list[str]" = []
		if True:
			file = open(path, "r")
			lines = file.readlines()
			file.close()

		state = ""
		for line_index in range(0, len(lines)):
			line = lines[line_index]

			if state == "":

				# Comment block handling
				if line.count("/*") != 0:
					parsing_comment_block.append(line)
					if line.count("*/") == 0:
						state = "comment_block"
					else:
						parsed_comment_blocks.append(parsing_comment_block)
						parsing_comment_block = []

				# Detection for start of new version section
				elif line.startswith("#define GL_VERSION_"):
					if parsing_version is not None:
						parsed_versions.append(parsing_version)
						parsing_version = None
					parsing_version = GLSpec.GLVersion()
					parsing_version.version = line.removeprefix("#define GL_VERSION_").rstrip().removesuffix(" 1").replace("_", ".")

				# Handling for constants
				elif line.startswith("#define GL_"):
					constant = line.removeprefix("#define ").rstrip()
					constant_parts = constant.partition(" ")
					parsing_version.constants.append(GLSpec.GLConstant(constant_parts[0].strip(), constant_parts[2].strip()))

				# Handling for functions
				elif line.startswith("GLAPI "):
					fnline = line
					return_type, api_entry, name_and_args = fnline.partition("APIENTRY")
					fn_name, _, fn_args = name_and_args.partition("(")
					fn_args, _, _ = fn_args.partition(")")
					fn_args = fn_args.strip()

					fn_args_split = []
					if fn_args == "void":
						fn_args_split = []
					else:
						fn_args_split = fn_args.strip().split(",")
						for v in fn_args_split:
							v = v.strip()

					parsing_version.functions.append(GLSpec.GLFunction(fn_name.strip(), return_type.removeprefix("GLAPI").strip(), fn_args_split))

			# Handling for reading until end of comment block
			elif state == "comment_block":
				parsing_comment_block.append(line)
				if line.count("*/") != 0:
					state = ""
					parsed_comment_blocks.append(parsing_comment_block)
					parsing_comment_block = []

		# Make sure we push the being parsed version into the list
		if parsing_version is not None:
			parsed_versions.append(parsing_version)
			parsing_version = None

		parsed_spec.versions = parsed_versions
		return parsed_spec

	def __init__(self, profile):
		self.profile = profile


def parse_spec(spec_input_path, spec_name, spec_cache_directory="_codegen/_glspec"):

	_GL_SPEC = spec_input_path
	_WRITE_PARSED_SPECS_ROOT=Path.cwd().joinpath(spec_cache_directory)

	if not _WRITE_PARSED_SPECS_ROOT.exists():
		os.makedirs(_WRITE_PARSED_SPECS_ROOT)

	gl_spec = GLSpec(spec_name)
	parsed_spec : GLSpec.ParsedSpec = gl_spec.parse(_GL_SPEC)

	for v in parsed_spec.versions:
		
		path = _WRITE_PARSED_SPECS_ROOT.joinpath(str(v.version).replace(".", "_"))
		if not path.exists():
				os.makedirs(path)
	
		info_path = path.joinpath("info.glspec")
		file = open(info_path, "w")
		file.write("VERSION="+v.version+'\n')
		file.write("NAME="+spec_name+'\n')
		file.close()

		constants_path = path.joinpath("constants.glspec")
		file = open(constants_path, "w")
		for c in v.constants:
			file.write(str(c)+'\n')
		file.close()

		functions_path = path.joinpath("functions.glspec")
		file = open(functions_path, "w")
		for f in v.functions:
			file.write(str(f)+'\n')
		file.close()

