#pragma once

#include <cppopengl/type.hpp>
#include <cppopengl/detail/unique_id.hpp>

#define _CPPOPENGL_DEFINE_UNIQUE_ID(name) using unique_##name = ::gl::detail::basic_unique_id<GLuint, ::gl::name##_tag, ::gl::name##_deleter>

namespace gl
{
	struct vao_deleter
	{
		void operator()(vao_id::rep _id) const
		{
			glDeleteVertexArrays(1, &_id);
		};
		void operator()(vao_id _id) const
		{
			(*this)(_id.get());
		};
	};
	struct vbo_deleter
	{
		void operator()(vbo_id::rep _id) const
		{
			glDeleteBuffers(1, &_id);
		};
		void operator()(vbo_id _id) const
		{
			(*this)(_id.get());
		};
	};
	struct shader_deleter
	{
		void operator()(shader_id::rep _id) const
		{
			glDeleteShader(_id);
		};
		void operator()(shader_id _id) const
		{
			(*this)(_id.get());
		};
	};
	struct program_deleter
	{
		void operator()(program_id::rep _id) const
		{
			glDeleteProgram(_id);
		};
		void operator()(program_id _id) const
		{
			(*this)(_id.get());
		};
	};
	struct texture_deleter
	{
		void operator()(texture_id::rep _id) const
		{
			glDeleteTextures(1, &_id);
		};
		void operator()(texture_id _id) const
		{
			(*this)(_id.get());
		};
	};
	
	_CPPOPENGL_DEFINE_UNIQUE_ID(vao);
	_CPPOPENGL_DEFINE_UNIQUE_ID(vbo);
	_CPPOPENGL_DEFINE_UNIQUE_ID(shader);
	_CPPOPENGL_DEFINE_UNIQUE_ID(program);
	_CPPOPENGL_DEFINE_UNIQUE_ID(texture);

};