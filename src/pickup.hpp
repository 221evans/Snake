#pragma once
#include <raylib.h>
class Pickup
{
public:
    Pickup();
    ~Pickup();
    Vector2 position;
    Vector2 size;
    void Draw();
};