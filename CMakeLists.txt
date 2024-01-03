cmake_minimum_required(VERSION 3.27)
project(opengl-course)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)
add_subdirectory(vendors/glfw-3.3.9)
add_subdirectory(vendors/glew-2.2.0/build/cmake)

add_executable(opengl-course OpenGLCourse/main.cpp)

target_link_libraries(opengl-course glfw glew OpenGL::GL)