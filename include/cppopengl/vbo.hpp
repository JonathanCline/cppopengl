#pragma once

/** @file */

#include <cppopengl/vao.hpp>

#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

namespace gl
{
	inline vbo_id new_vbo(const context& ctx)
	{
		vbo_id::rep _id;
		ctx.GenBuffers(1, &_id);
		return vbo_id(_id);
	};

	inline void destroy(const context& ctx, vbo_id _id)
	{
		auto _raw = _id.get();
		ctx.DeleteBuffers(1, &_raw);
	};
	inline void destroy(const context& ctx, unique_vbo& _vbo)
	{
		_vbo.reset(ctx);
	};

	inline void bind(const context& ctx, vbo_id _id, vbo_target _target)
	{
		ctx.BindBuffer(static_cast<GLenum>(_target), _id.get());
	};

	/**
	 * @brief VBO parameter names
	*/
	enum class vbo_param
	{
		size = GL_BUFFER_SIZE,
	};

	inline void get(const context& ctx, vbo_target _target, vbo_param _param, GLint& _outValue)
	{
		ctx.GetBufferParameteriv((GLenum)_target, (GLenum)_param, &_outValue);
	};




	enum class type : GLenum
	{
		gl_byte = GL_BYTE,
		gl_unsigned_byte = GL_UNSIGNED_BYTE,
		gl_short = GL_SHORT,
		gl_unsigned_short = GL_UNSIGNED_SHORT,
		gl_int = GL_INT,
		gl_unsigned_int = GL_UNSIGNED_INT,
		gl_half_float = GL_HALF_FLOAT,
		gl_float = GL_FLOAT,
		gl_double = GL_DOUBLE,
		gl_fixed = GL_FIXED,
	};

	/**
	 * @brief Same as glVertexAttribPointer
	 * 
	 * <a href="https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glVertexAttribPointer.xhtml" target="_blank">OpenGL Documentation</a>
	*/
	inline void vertex_attrib_pointer(const context& ctx, GLuint _index, type _type, GLuint _count, bool _normalize, GLsizei _stride, GLintptr _offset)
	{
		ctx.VertexAttribPointer
		(
			_index,
			static_cast<GLint>(_count),
			static_cast<GLenum>(_type),
			_normalize,
			_stride, 
			static_cast<const void*>((const char*)(0) + _offset)
		);
	};

	/**
	 * @copydoc vertex_attrib_pointer()
	*/
	inline void vertex_attrib_pointer(const context& ctx, GLuint _index, type _type, GLuint _count, bool _normalize)
	{
		vertex_attrib_pointer(ctx, _index, _type, _count, _normalize, 0, 0);
	};

	/**
	 * @copydoc vertex_attrib_pointer()
	*/
	inline void vertex_attrib_pointer(const context& ctx, GLuint _index, type _type, GLuint _count)
	{
		vertex_attrib_pointer(ctx, _index, _type, _count, false);
	};




	inline void buffer_data(const context& ctx, vbo_target _target, const void* _data, GLsizeiptr _sizeBytes, vbo_usage _usage)
	{
		ctx.BufferData(static_cast<GLenum>(_target), _sizeBytes, _data, static_cast<GLenum>(_usage));
	};
	template <typename T>
	inline void buffer_data(const context& ctx, vbo_target _target, const T* _data, GLsizeiptr _count, vbo_usage _usage)
	{
		ctx.BufferData(static_cast<GLenum>(_target), sizeof(T) * _count, _data, static_cast<GLenum>(_usage));
	};

	inline void buffer_subdata(const context& ctx, vbo_target _target, const void* _data, GLsizeiptr _sizeBytes, GLintptr _offsetBytes)
	{
		ctx.BufferSubData(static_cast<GLenum>(_target), _offsetBytes, _sizeBytes, _data);
	};
	template <typename T>
	inline void buffer_subdata(const context& ctx, vbo_target _target, const T* _data, GLsizeiptr _count, GLintptr _offset)
	{
		return buffer_subdata(ctx, _target, static_cast<const void*>(_data), _count * sizeof(T), _offset * sizeof(T));
	};



	// Adds a vbo to a vao
	inline void assign_buffer(const context& ctx, vao_id _vao, vbo_id _vbo, vbo_target _target)
	{
		const auto _oldVAO = get_bound_vao(ctx);

		bind(ctx, _vao);
		bind(ctx, _vbo, _target);

		bind(ctx, _oldVAO);
	};


	inline void buffer_data(const context& ctx, vao_id _vao, vbo_id _vbo, const void* _data, GLsizeiptr _sizeBytes, vbo_usage _usage)
	{
		const auto o = get_bound_vao(ctx);
		bind(ctx, _vao);
		bind(ctx, _vbo, vbo_target::array);
		buffer_data(ctx, vbo_target::array, _data, _sizeBytes, _usage);
		bind(ctx, _vao);
	};

	template <typename T>
	inline void buffer_data(const context& ctx, vao_id _vao, vbo_id _vbo, const T* _data, GLsizeiptr _count, vbo_usage _usage)
	{
		return buffer_data(ctx, _vao, _vbo, static_cast<const void*>(_data), sizeof(T) * _count, _usage);
	};



	inline void buffer_subdata(const context& ctx, vao_id _vao, vbo_id _vbo, const void* _data, GLsizeiptr _sizeBytes, GLintptr _offsetBytes)
	{
		const auto o = get_bound_vao(ctx);
		bind(ctx, _vao);
		bind(ctx, _vbo, vbo_target::array);
		buffer_subdata(ctx, vbo_target::array, _data, _sizeBytes, _offsetBytes);
		bind(ctx, _vao);
	};
	
	template <typename T>
	inline void buffer_subdata(const context& ctx, vao_id _vao, vbo_id _vbo, const T* _data, GLsizeiptr _count, GLintptr _offset)
	{
		return buffer_subdata(ctx, _vao, _vbo, static_cast<const void*>(_data), sizeof(T) * _count, sizeof(T) * _offset);
	};

	/**
	 * @brief Gets the size of a VBO's buffer in bytes.
	 * @param ctx Context.
	 * @param _target Target the VBO is bound to.
	 * @return Size in bytes.
	*/
	inline GLsizei get_buffer_size(const context& ctx, vbo_target _target)
	{
		GLint _value;
		get(ctx, _target, vbo_param::size, _value);
		return static_cast<GLsizei>(_value);
	};

};
