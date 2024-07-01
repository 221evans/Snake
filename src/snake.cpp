#include "snake.hpp"

Snake::Snake()
{
    snakePosition = {400, 300};
    snakeSize = {20, 20};
    snakeDirection = {1, 1}; // controls speed of snake
}

Snake::~Snake()
{

}

void Snake::Draw()
{
    DrawRectangleV(snakePosition, snakeSize, GREEN);
}
