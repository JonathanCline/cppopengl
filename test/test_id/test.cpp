#define CPPOPENGL_GLAD
#define CPPOPENGL_CPP 20
#include <glad/glad.h>
#include <cppopengl/type.hpp>

#include <iostream>
#include <cstdlib>

#define CPPOPENGL_TEST_FAIL(code, reason) { ::std::cout << "[ERROR] (line #" << __LINE__ << ") " << reason << '\n'; ::exit(code); }
#define CPPOPENGL_TEST_PASS() ::exit(0)


#define _ID_TYPE(name) ::gl::name##_id
#define _TYPE_VALUE(name) ::gl::object_type::name

#define _TEST_ID_OBJECT_TYPE(objectName) { auto id = _ID_TYPE(objectName)(); if (id.type() != _TYPE_VALUE(objectName)) {\
	const auto r = "gl::" #objectName "_id object type is incorrect"; CPPOPENGL_TEST_FAIL(1, r); }; }
#define _TEST_ID_NULL(objectName) { auto id = _ID_TYPE(objectName)(); if (id) { \
 	const auto r = "gl::" #objectName "_id was default constructed but is not null"; CPPOPENGL_TEST_FAIL(2, r); }; }
#define _TEST_ID_RELEASE_RESULT(objectName) { auto id = _ID_TYPE(objectName)(1); auto v = id.release(); if (v != 1) { \
 	const auto r = "gl::" #objectName "_id.release() did not return its value when .released()"; CPPOPENGL_TEST_FAIL(3, r); }; }
#define _TEST_ID_RELEASE_NULL_BEHAVIOR(objectName) { auto id = _ID_TYPE(objectName)(1); auto v = id.release(); if (id) { \
 	const auto r = "gl::" #objectName "_id.release() did not set the ID to be null"; CPPOPENGL_TEST_FAIL(4, r); }; }
#define _TEST_ID_GET(objectName) { auto id = _ID_TYPE(objectName)(1); auto v = id.get(); if (v != 1) { \
 	const auto r = "gl::" #objectName "_id.get() did not return the same value it was constructed with"; CPPOPENGL_TEST_FAIL(5, r); }; }

#define _TEST_ID(objectName) {\
	_TEST_ID_OBJECT_TYPE(objectName); \
	_TEST_ID_NULL(objectName); \
	_TEST_ID_RELEASE_RESULT(objectName);\
	_TEST_ID_RELEASE_NULL_BEHAVIOR(objectName);\
	_TEST_ID_GET(objectName);}


int main(int _nargs, const char* _vargs[])
{
	_TEST_ID(program);
	_TEST_ID(shader);
	_TEST_ID(texture);
	_TEST_ID(vao);
	_TEST_ID(vbo);

	CPPOPENGL_TEST_PASS();
};
