#pragma once

/** @file */

#include <cppopengl/vao.hpp>

#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

#include <span>

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

	inline void unbind(const context& ctx, vbo_target _target)
	{
		ctx.BindBuffer(static_cast<GLenum>(_target), 0);
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
	inline GLint get(const context& ctx, vbo_target _target, vbo_param _param)
	{
		GLint v;
		get(ctx, _target, _param, v);
		return v;
	};



	
	/**
	 * @brief Same as glVertexAttribPointer
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glVertexAttribPointer.xhtml)
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




	/**
	 * @brief Same as glBufferData
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glBufferData.xhtml)
	*/
	inline void buffer_data(const context& ctx, vbo_target _target, const std::byte* _data, GLsizeiptr _sizeBytes, vbo_usage _usage = gl::vbo_usage::static_draw)
	{
		ctx.BufferData(static_cast<GLenum>(_target), _sizeBytes, _data, static_cast<GLenum>(_usage));
	};

	/**
	 * @brief Same as glBufferData
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glBufferData.xhtml)
	*/
	template <typename T, size_t Extent>
	inline void buffer_data(const context& ctx, vbo_target _target, std::span<T, Extent> _data, vbo_usage _usage = gl::vbo_usage::static_draw)
	{
		ctx.BufferData(static_cast<GLenum>(_target), _data.size_bytes(), _data.data(), static_cast<GLenum>(_usage));
	};


	inline void buffer_subdata(const context& ctx, vbo_target _target, const std::byte* _data, GLsizeiptr _sizeBytes, GLintptr _offsetBytes)
	{
		ctx.BufferSubData(static_cast<GLenum>(_target), _offsetBytes, _sizeBytes, _data);
	};

	template <typename T, size_t Extent>
	inline void buffer_subdata(const context& ctx, vbo_target _target, std::span<T, Extent> _data, GLintptr _offsetBytes)
	{
		ctx.BufferSubData(static_cast<GLenum>(_target), _offsetBytes, _data.size_bytes(), _data.data());
	};


#ifdef GL_VERSION_4_5
	inline void vertex_array_vertex_buffer(const context& ctx, vao_id _vao, GLuint _bindingIndex, vbo_id _vbo, GLintptr _offset, GLsizei _stride)
	{
		ctx.VertexArrayVertexBuffer(_vao.get(), _bindingIndex, _vbo.get(), _offset, _stride);
	};
#endif


	



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
