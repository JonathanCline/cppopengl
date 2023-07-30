#pragma once
#ifndef CPPOPENGL_CONTEXT_HPP
#define CPPOPENGL_CONTEXT_HPP

/** @file */

#include <cppopengl/detail/gl.hpp>
#include <cppopengl/detail/utility.hpp>
#include <cppopengl/detail/context_api.hpp>

/**
 * @brief Whether or not the OpenGL API functions are loaded as globals.
*/
#define CPPOPENGL_GLOBAL_API_V true

namespace gl
{
#if CPPOPENGL_GLOBAL_API_V
	/**
	 * @brief This is only defined if the macro "CPP_OPENGL_API" is defined.
	 * @return OpenGL context object,
	*/
	constexpr context global_context() { return context(); };
#endif

	/**
	 * @brief Loads OpenGL.
	 * @param ctx The opengl context to load.
	 * @return True on good load, false on error.
	*/
	inline bool load_gl(const context& ctx)
	{
		return gladLoadGL();
	};

	/**
	 * @brief Alias for the GLAD function address getter function signature.
	*/
	using LoadProcFn = GLADloadproc;

	/**
	 * @brief Loads OpenGL using the provided function address getter.
	 * @param ctx The OpenGL context to load.
	 * @return True on good load, false on error.
	*/
	inline bool load_gl(const context& ctx, LoadProcFn _loadProc)
	{
		return gladLoadGLLoader(_loadProc);
	};

	/**
	 * @brief Retrieves the version of the OpenGL context.
	 * @param ctx OpenGL context.
	 * @return OpenGL version value.
	*/
	inline version get_version(const context& ctx)
	{
		GLint ma = 0, mi = 0;
		ctx.GetIntegerv(GL_MAJOR_VERSION, &ma);
		ctx.GetIntegerv(GL_MINOR_VERSION, &mi);
		return version{ static_cast<version::rep>(ma), static_cast<version::rep>(mi) };
	};
};

#endif // CPPOPENGL_CONTEXT_HPP