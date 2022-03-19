#pragma once
#ifndef CPPOPENGL_GL_HPP
#define CPPOPENGL_GL_HPP

#ifdef CPPOPENGL_GLAD
	#include <glad/glad.h>
#else
	#error "No gl header file specified, bug me about it please."
#endif

#endif // CPPOPENGL_GL_HPP