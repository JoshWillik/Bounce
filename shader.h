#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <GL/glew.h>

class Shader {
  GLuint pointer;

  public:
    static const GLuint VERTEX = GL_VERTEX_SHADER;
    static const GLuint FRAGMENT = GL_FRAGMENT_SHADER;
    Shader( GLuint type );
    void source( char* source );
    void compile();

    static Shader fromFile( char* filepath );
};

#include "game.h"
#endif
