#pragma once

/** @file */

#include <cppopengl/context.hpp>
#include <cppopengl/type.hpp>

#include <cppopengl/detail/unique_id.hpp>

#define _CPPOPENGL_DEFINE_UNIQUE_ID(name) using unique_##name = ::gl::detail::basic_unique_id<GLuint, ::gl::name##_tag, ::gl::name##_deleter>

namespace gl
{
	struct vao_deleter
	{
		void operator()(const context& ctx, vao_id::rep _id) const
		{
			ctx.DeleteVertexArrays(1, &_id);
		};
		void operator()(const context& ctx, vao_id&& _id) const
		{
			(*this)(ctx, _id.get());
		};
	};
	struct vbo_deleter
	{
		void operator()(const context& ctx, vbo_id::rep _id) const
		{
			ctx.DeleteBuffers(1, &_id);
		};
		void operator()(const context& ctx, vbo_id&& _id) const
		{
			(*this)(ctx, _id.get());
		};
	};
	struct shader_deleter
	{
		void operator()(const context& ctx, shader_id::rep _id) const
		{
			ctx.DeleteShader(_id);
		};
		void operator()(const context& ctx, shader_id&& _id) const
		{
			(*this)(ctx, _id.get());
		};
	};
	struct program_deleter
	{
		void operator()(const context& ctx, program_id::rep _id) const
		{
			ctx.DeleteProgram(_id);
		};
		void operator()(const context& ctx, program_id&& _id) const
		{
			(*this)(ctx, _id.get());
		};
	};
	struct texture_deleter
	{
		void operator()(const context& ctx, texture_id::rep _id) const
		{
			ctx.DeleteTextures(1, &_id);
		};
		void operator()(const context& ctx, texture_id&& _id) const
		{
			(*this)(ctx, _id.get());
		};
	};
	
	_CPPOPENGL_DEFINE_UNIQUE_ID(vao);
	_CPPOPENGL_DEFINE_UNIQUE_ID(vbo);
	_CPPOPENGL_DEFINE_UNIQUE_ID(shader);
	_CPPOPENGL_DEFINE_UNIQUE_ID(program);
	_CPPOPENGL_DEFINE_UNIQUE_ID(texture);

};