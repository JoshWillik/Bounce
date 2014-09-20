#include "glfw.h"

GLFW::GLFW(){
}

void GLFW::start(){
  if( !started ){
    std::cout << "Starting GLFW" << std::endl;
    glfwInit();
    started = 1;
  }
}

void GLFW::stop(){
  if( started ){
    std::cout << "Stopping GLFW" << std::endl;
    glfwTerminate();
    started = 0;
  }
}
