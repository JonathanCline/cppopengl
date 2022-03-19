

macro(MATCH_DIRECTORY_CONTENTS out_contents in_directory in_pattern)
	file(GLOB ${out_contents} RELATIVE ${in_directory} ${in_pattern})
endmacro()

macro(GET_CMAKE_SUBDIRS out_subdirs in_parentDirectory)

	set(__subdirs )
	MATCH_DIRECTORY_CONTENTS(__subdirs ${in_parentDirectory} "*/CMakeLists.txt")

	foreach(__value IN LISTS __subdirs)
		set(__tvalue )
		string(REPLACE "/CMakeLists.txt" "" __tvalue ${__value})
		list(APPEND ${out_subdirs} ${__tvalue})
	endforeach()

endmacro()

macro(GET_CMAKE_SUBDIRS_HERE out_subdirs)
	GET_CMAKE_SUBDIRS(${out_subdirs} ${CMAKE_CURRENT_LIST_DIR})
endmacro()

macro(ADD_CMAKE_SUBDIRS_HERE)
	set(__cmakeSubdirs )
	GET_CMAKE_SUBDIRS_HERE(__cmakeSubdirs)
	foreach(__value IN LISTS __cmakeSubdirs)
		add_subdirectory(${__value})
	endforeach()
endmacro()

macro(SET_TARGET_CPP_20 in_target)
	if (MSVC)
		target_compile_options(${in_target} PUBLIC /std:c++latest)
	else()
		target_compile_options(${in_target} PUBLIC -std=c++20)
	endif()
endmacro()
