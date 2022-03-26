#pragma once

/** @file */

#include <cppopengl/enum.hpp>
#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>


#include <string_view>


namespace gl
{
	inline shader_id new_shader(const context& ctx, shader_type _type)
	{
		return shader_id(ctx.CreateShader(static_cast<GLenum>(_type)));
	};

	inline void shader_source(const context& ctx,
		shader_id _shader, GLsizei _count, const GLchar* const* _strings, const GLint* _lengths)
	{
		ctx.ShaderSource(_shader.get(), _count, _strings, _lengths);
	};
	inline void shader_source(const context& ctx,
		shader_id _shader, const std::string_view& _string)
	{
		const GLchar* _strings[] = { _string.data() };
		const GLint _lengths[] = { (GLint)_string.size() };
		return shader_source(ctx, _shader, 1, _strings, _lengths);
	};

	enum class shader_param
	{
		compile_status = GL_COMPILE_STATUS,
	};

	inline void get_shader_iv(const context& ctx, shader_id _shader, shader_param _param, GLint& _outValue)
	{
		ctx.GetShaderiv(_shader.get(), static_cast<GLenum>(_param), &_outValue);
	};

	inline bool get_compile_status(const context& ctx, shader_id _shader)
	{
		GLint _status;
		get_shader_iv(ctx, _shader, shader_param::compile_status, _status);
		return _status == GL_TRUE;
	};
	
	inline bool compile_shader(const context& ctx, shader_id _shader)
	{
		ctx.CompileShader(_shader.get());
		return get_compile_status(ctx, _shader);
	};

	// same as
	// @code
	// shader_source(ctx, _shader, _source)
	// compile_shader(ctx, _shader)
	// @endcode
	//
	inline bool compile_shader(const context& ctx, shader_id _shader, const std::string_view& _source)
	{
		shader_source(ctx, _shader, _source);
		return compile_shader(ctx, _shader);
	};


};
