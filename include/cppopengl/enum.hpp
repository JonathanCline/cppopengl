#pragma once

#include <cppopengl/detail/gl.hpp>

namespace gl
{
	enum class shader_type : GLenum
	{
		vertex = GL_VERTEX_SHADER,
		fragment = GL_FRAGMENT_SHADER,
		compute = GL_COMPUTE_SHADER,
		geometry = GL_GEOMETRY_SHADER,
	};

	enum class texture_target : GLenum
	{
		tex2D = GL_TEXTURE_2D,
		array2D = GL_TEXTURE_2D_ARRAY,
	};


	enum class vbo_target : GLenum
	{
		array = GL_ARRAY_BUFFER,
		element = GL_ELEMENT_ARRAY_BUFFER,

		copy_read = GL_COPY_READ_BUFFER,
		copy_write = GL_COPY_WRITE_BUFFER,

		uniform_buffer = GL_UNIFORM_BUFFER,
	};

	enum class vbo_usage : GLenum
	{
		static_draw = GL_STATIC_DRAW,
		static_copy = GL_STATIC_COPY,
		static_read = GL_STATIC_READ,

		stream_draw = GL_STREAM_DRAW,
		stream_copy = GL_STREAM_COPY,
		stream_read = GL_STREAM_READ,

		dynamic_draw = GL_DYNAMIC_DRAW,
		dynamic_copy = GL_DYNAMIC_COPY,
		dynamic_read = GL_DYNAMIC_READ,
	};

};
