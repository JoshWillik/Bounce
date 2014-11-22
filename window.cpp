#include "window.h"

Window::Window( int width, int height, const char* title ){
  win = glfwCreateWindow( width, height, title, nullptr, nullptr );
}

GLFWwindow* Window::getWin(){
  return win;
}

void Window::poll(){
  glfwPollEvents();
}

void Window::open(){
  glfwMakeContextCurrent( win );
}

void Window::callback( Game* game ){
  glfwSetWindowUserPointer( win, game );
}

bool Window::shouldClose(){
  return glfwWindowShouldClose( win );
}

void Window::shouldClose( bool should ){
  if( should ){
    glfwSetWindowShouldClose( win, GL_TRUE );
  } else {
    glfwSetWindowShouldClose( win, GL_FALSE );
  }
}

void Window::swap(){
  glfwSwapBuffers( win );
}
