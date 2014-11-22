#include "game.h"
#include "window.h"

Game::Game() : glfw(), window( 800, 600, "Bounce" ) {
}

void Game::loadShaders ( const char* folder ){
}

void Game::launch (){
  window.open();
  loop();
}

void Game::loop (){
  while( !window.shouldClose() ){
    window.swap();
    window.poll();
  }
}
void Game::keypress( GLFWwindow* window, int key, int scancode, int action, int mods ){

}

Window Game::getWindow(){
  return window;
}
