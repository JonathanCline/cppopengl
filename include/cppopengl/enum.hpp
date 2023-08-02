#pragma once

#include <cppopengl/detail/gl.hpp>

#include <type_traits>

namespace gl
{
	template <typename T>
	constexpr auto to_underlying(T v) -> std::underlying_type_t<T>
	{
		return static_cast<std::underlying_type_t<T>>(v);
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


	enum class shader_type : GLenum
	{
		vertex = GL_VERTEX_SHADER,
		fragment = GL_FRAGMENT_SHADER,
#ifdef GL_COMPUTER_SHADER
		compute = GL_COMPUTE_SHADER,
#endif
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
		element_array = GL_ELEMENT_ARRAY_BUFFER,

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

	enum class draw_mode : GLenum
	{
		points = GL_POINTS,
		line_strip = GL_LINE_STRIP,
		line_loop = GL_LINE_LOOP,
		lines = GL_LINES,
		line_strip_adjacency = GL_LINE_STRIP_ADJACENCY,
		lines_adjacency = GL_LINES_ADJACENCY,
		triangle_strip = GL_TRIANGLE_STRIP,
		triangle_fan = GL_TRIANGLE_FAN,
		triangles = GL_TRIANGLES,
		triangle_strip_adjacency = GL_TRIANGLE_STRIP_ADJACENCY,
		triangles_adjacency = GL_TRIANGLES_ADJACENCY,
		patches = GL_PATCHES
	};
};
