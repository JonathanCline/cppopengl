#pragma once
#ifndef CPPOPENGL_CONTEXT_HPP
#define CPPOPENGL_CONTEXT_HPP

/** @file */

#include <cppopengl/detail/gl.hpp>
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
};

#endif // CPPOPENGL_CONTEXT_HPP