#pragma once

#include <FrogEngine.hpp>

namespace MyGame
{
 class MyGame : public fe::GameTemplate {
  public:
   MyGame();
   void Start() override;
   void Update(float _deltaTime) override;
   void Stop() override;
  };
}