#pragma once
#include <raylib.h>
#include "snake.hpp"

class Game
{
    public:
        Game();
        ~Game();
        void Update();
        void Draw();
        void ChangeDirection(int x, int y);
        
    private:
        Snake snake;
        int directionX = 1;
        int directionY = 0;
};
