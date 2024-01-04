#pragma once

#include <GL/glew.h>


#define ASSERT(x) if (!(x)) __builtin_trap()


#define GLCall( x ) \
    GLClearError(); \
    x; \
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

#define GLCallV( x ) [&]() { \
    GLClearError(); \
    auto retVal = x; \
    ASSERT(GLLogCall(#x, __FILE__, __LINE__)); \
    return retVal; \
}()


void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);