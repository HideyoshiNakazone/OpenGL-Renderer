#pragma once

#include <GL/glew.h>

#include "../VertexArray/VertexArray.h"
#include "../IndexBuffer/IndexBuffer.h"
#include "../Shader/Shader.h"


class Renderer
{
    public:
        void Clear() const;
        void Draw(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const;

    private:
        void Unbind(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const;
};