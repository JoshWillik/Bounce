#ifndef GAME_H
#define GAME_H

#include "glfw.h"
#include "window.h"
#include <iostream>

class Game{
  int runtime;
  GLFW glfw;
  Window window;

  public:
    Game();
    void loadShaders( const char* );
    Window getWindow();
    void launch();
    void keypress( GLFWwindow* window, int key, int scancode, int action, int mods );
    void loop();
};

#endif
