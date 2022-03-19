#pragma once
#ifndef CPPOPENGL_DETAIL_UTILITY_HPP
#define CPPOPENGL_DETAIL_UTILITY_HPP

//#ifndef CPPOPENGL_CMAKE

// Give the macros that should be defined by cmake some reasonable values

#ifndef __cplusplus
	#error "cppopengl requires a reasonably sane C++ compiler, this one doesn't even have __cplusplus defined..."
#endif

#ifndef CPPOPENGL_CPP
	#if __cplusplus <= 199711L
		// C++03 (or earlier)
		#define CPPOPENGL_CPP 03
	#elif __cplusplus == 201103L
		// C++11
		#define CPPOPENGL_CPP 11
	#elif __cplusplus == 201402L
		// C++14
		#define CPPOPENGL_CPP 14
	#elif __cplusplus ==  201703L
		// C++17
		#define CPPOPENGL_CPP 17
	#elif __cplusplus == 202002L
		// C++20
		#define CPPOPENGL_CPP 20
	#else
		// > C++20 (or something stupid occured)
		#define CPPOPENGL_CPP 20
	#endif

#endif

#if !(CPPOPENGL_CPP == 14 || CPPOPENGL_CPP == 17 || CPPOPENGL_CPP == 20 || CPPOPENGL_CPP >= 23)
	#error "Unsupported C++ version, this could be due to defining an invalid CPPOPENGL_CPP or you just need to bump the version to C++14 or newer"
#endif



// _CPPOPENGL_REQUIRES
#if CPPOPENGL_CPP >= 20
	#define _CPPOPENGL_REQUIRES(...) requires(__VA_ARGS__)
#else
	#define _CPPOPENGL_REQUIRES(...) 
#endif

// _CPPOPENGL_ENABLE_IF_T
#if CPPOPENGL_CPP >= 20
	#define _CPPOPENGL_ENABLE_IF_T(type, ...) type
#else
	#define _CPPOPENGL_ENABLE_IF_T(type, ...) ::std::enable_if_t<(__VA_ARGS__), type>
#endif

// _CPPOPENGL_VOID_T
#if CPPOPENGL_CPP >= 20
	#define _CPPOPENGL_VOID_T(...) void
#elif CPPOPENGL_CPP >= 17
	#define _CPPOPENGL_VOID_T(...) ::std::void_t<__VA_ARGS__>
#else
	#define _CPPOPENGL_VOID_T(...) ::gl::detail::void_t<__VA_ARGS__>;
#endif

// _CPPOPENGL_TCON_REQUIRES
#ifdef CPPOPENGL_LIMIT_TYPE_CONSTRAINTS
	#define _CPPOPENGL_TCON_REQUIRES(...)
#else
	#define _CPPOPENGL_TCON_REQUIRES(...) _CPPOPENGL_REQUIRES(__VA_ARGS__)
#endif

// _CPPOPENGL_TCON_VOID_T
#ifdef CPPOPENGL_LIMIT_TYPE_CONSTRAINTS
	#define _CPPOPENGL_TCON_VOID_T(...) void
#else
	#define _CPPOPENGL_TCON_VOID_T(...) _CPPOPENGL_VOID_T(__VA_ARGS__)
#endif

// _CPPOPENGL_TCON_ENABLE_IF_T
#ifdef CPPOPENGL_LIMIT_TYPE_CONSTRAINTS
	#define _CPPOPENGL_TCON_ENABLE_IF_T(type, ...) type
#else
	#define _CPPOPENGL_TCON_ENABLE_IF_T(type, ...) _CPPOPENGL_ENABLE_IF_T(type, __VA_ARGS__)
#endif


#endif // CPPOPENGL_DETAIL_UTILITY_HPP