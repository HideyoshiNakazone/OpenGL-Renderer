cmake_minimum_required(VERSION 3.27)
project(opengl-course)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
add_subdirectory(vendors/glfw-3.3.9)

add_executable(opengl-course main.cpp)

target_link_libraries(opengl-course glfw OpenGL::GL)