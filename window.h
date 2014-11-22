#ifndef WINDOW_H
#define WINDOW_H

#include "glfw.h"

class Game;
class Window {
  GLFWwindow* win;

  public:
    Window( int width, int height, const char* title );
    GLFWwindow* getWin();
    void poll();
    void open();
    void swap();
    void shouldClose( bool should );
    bool shouldClose();
    void callback( Game* game );
};

#include "game.h"
#endif
