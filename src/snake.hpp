#pragma once
#include <raylib.h>
class Snake
{
public:
    Snake();
    ~Snake();
    Vector2 snakePosition;
    Vector2 snakeSize;
    Vector2 snakeDirection;
    void Draw();
private:
    
};

