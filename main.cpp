#include <iostream>
#include "game.h"
using namespace std;

int main(){
  Game game;
  game.loadShaders( "shader" );
  game.launch();
  return 0;
}
