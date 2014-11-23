#include "shader.h"

Shader::Shader( GLuint type ){
  pointer = glCreateShader( type );
}

void Shader::source( char *source ){
  glShaderSource( source );
}

void Shader::compile(){
  glCompileShader(pointer);
}

static Shader fromFile( char* filepath, GLuint type ){
  std::ifstream stream( filepath );
  std::string code( (std::istreambuf_iterator( stream )), (std::istreambuf_iterator()) );

  Shader shader( type );
  shader.source( code.c_str() );
  return shader;
}
