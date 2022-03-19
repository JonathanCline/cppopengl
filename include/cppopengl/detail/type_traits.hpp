#pragma once
#ifndef CPPOPENGL_DETAIL_TYPE_TRAITS_HPP
#define CPPOPENGL_DETAIL_TYPE_TRAITS_HPP

#include <cppopengl/detail/utility.hpp>

#if CPPOPENGL_CPP >= 20
	#include <concepts>
#endif

#include <type_traits>

namespace gl
{
	namespace detail
	{
		template <typename... Ts>
		using void_t = void;
	};


#if CPPOPENGL_CPP >= 20
	namespace detail
	{
		template <typename T>
		concept cx_pointer = std::is_pointer_v<T>;

		template <typename T>
		concept cx_reference = std::is_reference_v<T>;

		template <typename T>
		concept cx_const = std::is_const_v<T>;

		template <typename T>
		concept cx_value = !cx_pointer<T> && !cx_reference<T> && !cx_const<T>;
	};
#endif

	namespace detail
	{
		template <typename T, typename Enable = void>
		struct is_value_type : std::integral_constant<bool, false> {};

		template <typename T>
		_CPPOPENGL_REQUIRES(detail::cx_value<T>)
		struct is_value_type<T,
			_CPPOPENGL_ENABLE_IF_T(void,
				!std::is_pointer<T>::value &&
				!std::is_reference<T>::value &&
				!std::is_const<T>::value)
		> : std::integral_constant<bool, true> {};
	};

};


#endif // CPPOPENGL_DETAIL_TYPE_TRAITS_HPP