#pragma once

/** @file */

#include <cppopengl/enum.hpp>
#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

#include <string_view>

namespace gl
{
	inline program_id new_program(const context& ctx)
	{
		return program_id( ctx.CreateProgram() );
	};
	inline void attach(const context& ctx, program_id _program, shader_id _shader)
	{
		ctx.AttachShader(_program.get(), _shader.get());
	};
	inline void detach(const context& ctx, program_id _program, shader_id _shader)
	{
		ctx.DetachShader(_program.get(), _shader.get());
	};
	inline bool get_link_status(const context& ctx, program_id _program)
	{
		GLint _param;
		ctx.GetProgramiv(_program.get(), GL_LINK_STATUS, &_param);
		return _param == GL_TRUE;
	};
	inline bool link(const context& ctx, program_id _program)
	{
		ctx.LinkProgram(_program.get());
		return get_link_status(ctx, _program);
	};

};
