#include "game.h"

Game::Game(){
  glfw.start();
  glfw.stop();
}

void Game::loadShaders ( const char* folder ){
  std::cout << "Including folder: " << folder << std::endl;
}

void Game::launch (){

}
