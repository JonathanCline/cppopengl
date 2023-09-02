#pragma once

/** @file */

#include <cppopengl/enum.hpp>
#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

#include <string>
#include <string_view>
#include <type_traits>


#define _CPPOPENGL_DECLVAL(type) ::std::declval<type>()

namespace gl
{
	/**
	 * @brief Program parameter names
	*/
	enum class program_param : GLenum
	{
		link_status = GL_LINK_STATUS,
		info_log_length = GL_INFO_LOG_LENGTH,
	};


	inline void get(const context& ctx, program_id _program, program_param _param, GLint& _outValue)
	{
		ctx.GetProgramiv(_program.get(), (GLenum)_param, &_outValue);
	};
	inline GLint get(const context& ctx, program_id _program, program_param _param)
	{
		GLint v;
		get(ctx, _program, _param, v);
		return v;
	};



	inline program_id create_program(const context& ctx)
	{
		return program_id( ctx.CreateProgram() );
	};

	
	/**
	 * @brief Invokes glUseProgram.
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glUseProgram.xhtml)
	 * 
	 * @param ctx OpenGL context.
	 * @param _program An OpenGL program object ID.
	 */
	inline void use_program(const context& ctx, const program_id& _program)
	{
		ctx.UseProgram(_program.get());
	};

	
	inline void attach(const context& ctx, program_id _program, shader_id _shader)
	{
		ctx.AttachShader(_program.get(), _shader.get());
	};

	/**
	 * @brief Attaches all shaders in a range to a program.
	 * @tparam RangeT Range of shader IDs.
	 * @param ctx OpenGL context.
	 * @param _program Program to attach shaders to.
	 * @param _shaders Range of shader IDs to attach.
	*/
	template <typename RangeT>
	inline auto attach(const context& ctx, program_id _program, const RangeT& _shaders) ->
		std::enable_if_t<std::is_convertible<
			decltype(_CPPOPENGL_DECLVAL(const RangeT&)[0]),	// from
			shader_id										// to
		>::value>
	{
		for (auto& v : _shaders)
		{
			gl::attach(ctx, _program, shader_id(v));
		};
	};

	inline void detach(const context& ctx, program_id _program, shader_id _shader)
	{
		ctx.DetachShader(_program.get(), _shader.get());
	};

	/**
	 * @brief Detaches all shaders in a range to a program.
	 * @tparam RangeT Range of shader IDs.
	 * @param ctx OpenGL context.
	 * @param _program Program to detach shaders from.
	 * @param _shaders Range of shader IDs to detach.
	*/
	template <typename RangeT>
	inline auto detach(const context& ctx, program_id _program, const RangeT& _shaders) ->
		std::enable_if_t<std::is_convertible<
			decltype(_CPPOPENGL_DECLVAL(const RangeT&)[0]),	// from
			shader_id										// to
		>::value>
	{
		for (auto& v : _shaders)
		{
			gl::detach(ctx, _program, shader_id(v));
		};
	};





	inline bool get_link_status(const context& ctx, program_id _program)
	{
		const auto _param = program_param::link_status;
		const auto _value = get(ctx, _program, _param);
		return _value == GL_TRUE;
	};

	inline bool link(const context& ctx, program_id _program)
	{
		ctx.LinkProgram(_program.get());
		return get_link_status(ctx, _program);
	};




	inline GLsizei get_info_log_length(const context& ctx, program_id _program)
	{
		return static_cast<GLsizei>(get(ctx, _program, program_param::info_log_length));
	};
	inline GLsizei get_info_log(const context& ctx, program_id _program, GLchar* _buffer, GLsizei _bufferLen)
	{
		GLsizei _readCount;
		ctx.GetProgramInfoLog(_program.get(), _bufferLen, &_readCount, _buffer);
		return _readCount;
	};
	template <typename StringT = std::string>
	inline StringT get_info_log(const context& ctx, program_id _program)
	{
		const auto _strLen = get_info_log_length(ctx, _program);
		auto _str = StringT(static_cast<size_t>(_strLen), '\0');
		const auto _readCount = static_cast<size_t>(get_info_log(ctx, _program, _str.data(), _strLen));
		_str.resize(_readCount);
		return _str;
	};



	/**
	 * @brief Invokes glEnableVertexAttribArray.
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glEnableVertexAttribArray.xhtml)
	 *
	 * @param ctx OpenGL context.
	 * @param _index Program attribute index to enable.
	 */
	inline void enable_vertex_attrib_array(const context& ctx, GLuint _index)
	{
		ctx.EnableVertexAttribArray(_index);
	};

	/**
	 * @brief Invokes glDisableVertexAttribArray.
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glDisableVertexAttribArray.xhtml)
	 *
	 * @param ctx OpenGL context.
	 * @param _index Program attribute index to disable.
	 */
	inline void disable_vertex_attrib_array(const context& ctx, GLuint _index)
	{
		ctx.DisableVertexAttribArray(_index);
	};

	/**
	 * @brief Invokes glGetAttribLocation
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glGetAttribLocation.xhtml)
	 *
	 * @param ctx OpenGL context.
	 * @param _program OpenGL program object ID.
	 * @param _name Name of the attribute (null terminated).
	 * @return Attribute location on success, -1 otherwise.
	*/
	inline GLint get_attrib_location(const context& ctx, gl::program_id _program, const GLchar* _name)
	{
		return ctx.GetAttribLocation(_program.get(), _name);
	};

	/**
	 * @brief Invokes glGetUniformLocation
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glGetUniformLocation.xhtml)
	 * 
	 * @param ctx OpenGL context.
	 * @param _program OpenGL program object ID.
	 * @param _name Name of the uniform (null terminated).
	 * @return Uniform location on success, -1 otherwise.
	*/
	inline GLint get_uniform_location(const context& ctx, gl::program_id _program, const GLchar* _name)
	{
		return ctx.GetUniformLocation(_program.get(), _name);
	};

};
