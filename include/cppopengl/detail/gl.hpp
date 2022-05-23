#pragma once
#ifndef CPPOPENGL_GL_HPP
#define CPPOPENGL_GL_HPP

#ifdef CPPOPENGL_GLAD
	#ifndef __glad_h_
		#include <glad/glad.h>
	#endif
#else
	// auto deduce

	#if defined(__glad_h_)
		// OK - using glad
	#else
		#error "No gl header file specified, enable using a loader header like glad or include a similar loader."
	#endif

#endif




#endif // CPPOPENGL_GL_HPP