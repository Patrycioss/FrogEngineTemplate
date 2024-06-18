
#include <FrogEngine.hpp>

#include "MyGame.hpp"

int main(){
  fe::Engine::Initialize();
  MyGame::MyGame myGame{};
  fe::Engine::Start(myGame);
  return 0;
}
