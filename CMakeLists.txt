cmake_minimum_required(VERSION 3.12)

project(cppopengl)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE "include")

target_compile_definitions(${PROJECT_NAME} INTERFACE CPPOPENGL_CMAKE=1)
target_compile_definitions(${PROJECT_NAME} INTERFACE CPPOPENGL_CPP=${CPPOPENGL_CPP})
