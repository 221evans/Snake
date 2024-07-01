#include <raylib.h>
#include "game.hpp"

int main()
{
    

    const int screenWidth = 800;
    const int screenHeight = 600;
    Game game;
    InitWindow(screenWidth, screenHeight, "Snake");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        game.Draw();
        game.Update();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}