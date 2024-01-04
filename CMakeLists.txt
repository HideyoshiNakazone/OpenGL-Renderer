cmake_minimum_required(VERSION 3.27)
project(opengl-course)

set(CMAKE_CXX_STANDARD 23)

find_package(OpenGL REQUIRED)
add_subdirectory(vendors/glfw-3.3.9)
add_subdirectory(vendors/glew-2.2.0/build/cmake)
add_subdirectory(vendors/stb_image)

add_executable(opengl-course
        OpenGLCourse/src/Application.cpp
        OpenGLCourse/src/Renderer/Renderer.cpp
        OpenGLCourse/src/Renderer/Renderer.h
        OpenGLCourse/src/VertexBuffer/VertexBuffer.cpp
        OpenGLCourse/src/VertexBuffer/VertexBuffer.h
        OpenGLCourse/src/IndexBuffer/IndexBuffer.cpp
        OpenGLCourse/src/IndexBuffer/IndexBuffer.h
        OpenGLCourse/src/VertexBufferLayout/VertexBufferLayout.cpp
        OpenGLCourse/src/VertexBufferLayout/VertexBufferLayout.h
        OpenGLCourse/src/VertexArray/VertexArray.cpp
        OpenGLCourse/src/VertexArray/VertexArray.h
        OpenGLCourse/src/Shader/Shader.cpp
        OpenGLCourse/src/Shader/Shader.h
        OpenGLCourse/src/Utils/OpenGLHandler.h
        OpenGLCourse/src/Utils/OpenGLHandler.h.cpp)



if(CMAKE_BUILD_TYPE MATCHES Debug)
    target_compile_definitions(opengl-course PUBLIC DEBUG=1)
elseif(CMAKE_BUILD_TYPE MATCHES Release)
    target_compile_definitions(opengl-course PUBLIC DEBUG=0)
endif()

target_link_libraries(opengl-course glfw glew stb::image OpenGL::GL)