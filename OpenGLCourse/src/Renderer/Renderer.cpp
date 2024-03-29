#include <iostream>
#include "Renderer.h"


void Renderer::Clear() const {
        GLCall(glClear(GL_COLOR_BUFFER_BIT));
}

void Renderer::Draw(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const {
    va.Bind();
    ib.Bind();
    shader.Bind();

    GLCall(glDrawElements(GL_TRIANGLES, ib.GetCount(), GL_UNSIGNED_INT, nullptr));

    Unbind(va, ib, shader);
}

void Renderer::Unbind(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const {
    #ifdef DEBUG
        va.Unbind();
        ib.Unbind();
        shader.Unbind();
    #endif
}