
#
# in_testTarget : Target name for the test
# in_testSource? : Optional test source, defaults to "test.cpp"
#
macro(CPPOPENGL_DEFINE_TEST in_testTarget)
	set(in_testSource_opt "test.cpp")
	if(${ARGC} EQUAL 2)
		set(in_testSource_opt ${ARGV1})
	endif()
	add_executable(${in_testTarget} ${in_testSource_opt})
	target_link_libraries(${in_testTarget} PUBLIC cppopengl)
endmacro()

#
# in_testTarget : Name of the test target, should match the value given to CPPOPENGL_DEFINE_TEST()
# in_testName : Name of this specific test instance.
# in_testArgs? : Optional list of additional args to pass to the test.
#
macro(CPPOPENGL_ADD_TEST in_testTarget in_testName)
	if (NOT TARGET ${in_testTarget})
		message(FATAL_ERROR "Test ${in_testTarget} is not defined! Use CPPOPENGL_DEFINE_TEST to define it!")
	endif()
	add_test(NAME ${in_testName} COMMAND ${in_testTarget} ARGN COMMAND_EXPAND_LISTS)
endmacro()


#ADD_CMAKE_SUBDIRS_HERE()
