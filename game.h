#ifndef GAME_H
#include "glfw.h"
#include <iostream>
#define GAME_H
class Game{
  int runtime;
  GLFW glfw;

  public:
  Game();
  void loadShaders( const char* );
  void launch();
};

#endif
