#pragma once

/** @file */

#include <cppopengl/enum.hpp>
#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

#include <string>
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
		info_log_length = GL_INFO_LOG_LENGTH,
	};

	inline void get(const context& ctx, shader_id _shader, shader_param _param, GLint& _outValue)
	{
		ctx.GetShaderiv(_shader.get(), (GLenum)_param, &_outValue);
	};
	inline GLint get(const context& ctx, shader_id _shader, shader_param _param)
	{
		GLint v;
		get(ctx, _shader, _param, v);
		return v;
	};

	inline bool get_compile_status(const context& ctx, shader_id _shader)
	{
		const auto _status = get(ctx, _shader, shader_param::compile_status);
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



	inline GLsizei get_info_log_length(const context& ctx, shader_id _shader)
	{
		return static_cast<GLsizei>(get(ctx, _shader, shader_param::info_log_length));
	};
	inline GLsizei get_info_log(const context& ctx, shader_id _shader, GLchar* _buffer, GLsizei _bufferLen)
	{
		GLsizei _readCount;
		ctx.GetShaderInfoLog(_shader.get(), _bufferLen, &_readCount, _buffer);
		return _readCount;
	};

	template <typename StringT = std::string>
	inline StringT get_info_log(const context& ctx, shader_id _shader)
	{
		const auto _strLen = get_info_log_length(ctx, _shader);
		auto _str = StringT(static_cast<size_t>(_strLen), '\0');
		const auto _readCount = static_cast<size_t>(get_info_log(ctx, _shader, _str.data(), _strLen));
		_str.resize(_readCount);
		return _str;
	};




};
