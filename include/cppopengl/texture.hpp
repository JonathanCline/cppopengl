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
	inline void unbind(const context& ctx, texture_target _target)
	{
		ctx.BindTexture(static_cast<GLenum>(_target), 0);
	};

	/**
	 * @brief Allocates and assigns 3D texture data.
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glTexImage3D.xhtml)
	 * 
	 * @param ctx OpenGL context object.
	 * @param _target Texture target to write to.
	 * @param _lodLevel Level of detail number. Level n is the nth reduction image.
	 * @param _internalformat Specifies number of color components in the texture.
	 * @param _width Width of the texture image in texels.
	 * @param _height Height of the texture image in texels.
	 * @param _depth Number of layers in the texture.
	 * @param _format Specifies the format of the pixel data.
	 * @param _type Specifies the data type of the pixels.
	 * @param _pixels Pointer to the image data in memory.
	*/
	inline void tex_image_3D(const context& ctx,
		texture_target _target, GLint _lodLevel, texture_internal_format _internalFormat,
		GLsizei _width, GLsizei _height, GLsizei _depth,
		texture_format _format, type _type, const void* _pixels)
	{
		ctx.TexImage3D
		(
			static_cast<GLenum>(_target), _lodLevel, static_cast<GLenum>(_internalFormat),
			_width, _height, _depth, 0,
			static_cast<GLenum>(_format), static_cast<GLenum>(_type),
			_pixels
		);
	};

	/**
	 * @brief Assign 3D texture data into existing texture storage.
	 * [OpenGL Documentation](https://www.khronos.org/registry/OpenGL-Refpages/gl4/html/glTexSubImage3D.xhtml)
	 *
	 * @param ctx OpenGL context object.
	 * @param _target Texture target to write to.
	 * @param _lodLevel Level of detail number. Level n is the nth reduction image.
	 * @param _internalformat Specifies number of color components in the texture.
	 * @param _width Width of the texture image in texels.
	 * @param _height Height of the texture image in texels.
	 * @param _depth Number of layers in the texture.
	 * @param _format Specifies the format of the pixel data.
	 * @param _type Specifies the data type of the pixels.
	 * @param _pixels Pointer to the image data in memory.
	*/
	inline void tex_subimage_3D(const context& ctx,
		texture_target _target, GLint _lodLevel,
		GLint _xOffset, GLint _yOffset, GLint _zOffset,
		GLsizei _width, GLsizei _height, GLsizei _depth,
		texture_format _format, type _type, const void* _pixels)
	{
		ctx.TexSubImage3D
		(
			static_cast<GLenum>(_target), _lodLevel,
			_xOffset, _yOffset, _zOffset,
			_width, _height, _depth,
			static_cast<GLenum>(_format), static_cast<GLenum>(_type),
			_pixels
		);
	};
};
