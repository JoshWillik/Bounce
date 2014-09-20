#ifndef GLFW_H
#include <iostream>
#include <GLFW/glfw3.h>
#define GLFW_H
class GLFW {
  int started = 0;

  public:
  GLFW();
  void start();
  void stop();
};
#endif
