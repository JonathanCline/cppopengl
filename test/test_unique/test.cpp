#define CPPOPENGL_GLAD
#define CPPOPENGL_CPP 20
#include <glad/glad.h>
#include <cppopengl/type.hpp>
#include <cppopengl/unique.hpp>

#include <iostream>
#include <cstdlib>

#define CPPOPENGL_TEST_FAIL(code, reason) { ::std::cout << "[ERROR] (line #" << __LINE__ << ") " << reason << '\n'; ::exit(code); }
#define CPPOPENGL_TEST_PASS() ::exit(0)

#define _UID_TYPE(name) ::gl::unique_##name

#define _TEST_DEFAULT_CONSTRUCTION(name) { auto id = _UID_TYPE(name)(); if (id){ \
	CPPOPENGL_TEST_FAIL(1, "gl::unique_" #name " default constructor created a non-null object!"); }; }



#define _TEST_ID(name) {\
	_TEST_DEFAULT_CONSTRUCTION(name); }

int main(int _nargs, const char* _vargs[])
{
	_TEST_ID(vao);
	_TEST_ID(vbo);
	_TEST_ID(shader);
	_TEST_ID(program);
	_TEST_ID(texture);

	CPPOPENGL_TEST_PASS();
};
