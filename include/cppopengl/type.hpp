#pragma once
#ifndef CPPOPENGL_TYPE_HPP
#define CPPOPENGL_TYPE_HPP

#include <cppopengl/detail/object_id.hpp>

/** @file */

namespace gl
{
	enum class object_type
	{
		program 	= 1,
		shader 		= 2,
		vao 		= 3,
		vbo 		= 4,
		texture 	= 5,
	};

	namespace detail
	{
		template <object_type TypeV>
		struct basic_object_tag
		{
			/**
			 * @brief Gets the type of the object.
			 * 
			 * Note that this doesnt check the type of the actual object ID this holds and
			 * is determined solely by the object_id type. 
			 * 
			 * @return Object type.
			*/
			constexpr object_type type() const noexcept { return TypeV; };
		};
	};


	// Tag type definitions

	using program_tag = detail::basic_object_tag<object_type::program>;
	using shader_tag = detail::basic_object_tag<object_type::shader>;
	using texture_tag = detail::basic_object_tag<object_type::texture>;
	using vao_tag = detail::basic_object_tag<object_type::vao>;
	using vbo_tag = detail::basic_object_tag<object_type::vbo>;
	

	// ID type definitions

	using program_id = detail::basic_object_id<GLuint, program_tag>;
	using shader_id = detail::basic_object_id<GLuint, shader_tag>;
	using texture_id = detail::basic_object_id<GLuint, texture_tag>;
	using vao_id = detail::basic_object_id<GLuint, vao_tag>;
	using vbo_id = detail::basic_object_id<GLuint, vbo_tag>;


};

#endif // CPPOPENGL_TYPE_HPP