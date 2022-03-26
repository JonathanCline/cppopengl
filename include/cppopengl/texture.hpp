#pragma once

/** @file */

#include <cppopengl/enum.hpp>
#include <cppopengl/type.hpp>
#include <cppopengl/context.hpp>

namespace gl
{
	inline texture_id new_texture(const context& ctx)
	{
		texture_id::rep _id;
		ctx.GenTextures(1, &_id);
		return texture_id(_id);
	};

	inline void destroy(const context& ctx, texture_id _id)
	{
		auto _raw = _id.get();
		ctx.DeleteTextures(1, &_raw);
	};
	inline void destroy(const context& ctx, unique_texture& _texture)
	{
		_texture.reset(ctx);
	};

	inline texture_unit get_active_texture_unit(const context& ctx)
	{
		GLint v;
		ctx.GetIntegerv(GL_ACTIVE_TEXTURE, &v);
		if (v != 0)
			return texture_unit(static_cast<texture_unit::rep>(v - GL_TEXTURE0));
		else
			return texture_unit(0);
	};
	inline void set_active_texture_unit(const context& ctx, texture_unit _unit)
	{
		ctx.ActiveTexture(GL_TEXTURE0 + _unit.get());
	};
	inline void bind(const context& ctx, texture_id _id, texture_target _target)
	{
		ctx.BindTexture(static_cast<GLenum>(_target), _id.get());
	};
};
