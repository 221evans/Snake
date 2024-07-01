#include "game.hpp"


Game::Game()
{
   
}

Game::~Game()
{

}
void Game::Draw()
{
    snake.Draw();
}

void Game::ChangeDirection(int x, int y)
{
    directionX = x;
    directionY = y;
}

void Game::Update()
{
    HandleInput();
}

void Game::HandleInput()
{
    if (IsKeyPressed(KEY_RIGHT) && directionX != -1)
    {
        ChangeDirection(1, 0);
    }
    if (IsKeyPressed(KEY_LEFT) && directionX != 1)
    {
        ChangeDirection(-1, 0);
    }
    if (IsKeyPressed(KEY_UP) && directionY != 1)
    {
        ChangeDirection(0, -1);
    }
    if (IsKeyPressed(KEY_DOWN) && directionY != -1)
    {
        ChangeDirection(0, 1);
    }

    snake.snakePosition.x += directionX * snake.snakeDirection.x;
    snake.snakePosition.y += directionY * snake.snakeDirection.y;
}


