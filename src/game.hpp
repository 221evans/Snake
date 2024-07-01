#pragma once
#include <raylib.h>
#include "snake.hpp"
#include "pickup.hpp"

class Game
{
    public:
        Game();
        ~Game();
        void Update();
        void Draw();
        void ChangeDirection(int x, int y);
        void HandleInput();
        
    private:
        Snake snake;
        Pickup pickup;
        int directionX = 1;
        int directionY = 0;
};
