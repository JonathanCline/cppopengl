#pragma once

/** @file */

#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

namespace gl
{
	inline vao_id new_vao(const context& ctx)
	{
		vao_id::rep _id;
		ctx.GenVertexArrays(1, &_id);
		return vao_id(_id);
	};

	inline void destroy(const context& ctx, vao_id _id)
	{
		auto _raw = _id.get();
		ctx.DeleteVertexArrays(1, &_raw);
	};
	inline void destroy(const context& ctx, unique_vao& _vao)
	{
		_vao.reset(ctx);
	};

	inline void bind(const context& ctx, vao_id _id)
	{
		ctx.BindVertexArray(_id.get());
	};

	inline vao_id get_bound_vao(const context& ctx)
	{
		GLint _value;
		ctx.GetIntegerv(GL_VERTEX_ARRAY_BINDING, &_value);
		return vao_id(static_cast<vao_id::rep>(_value));
	};

};
