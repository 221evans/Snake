#include "pickup.hpp"

Pickup::Pickup()
{
    position = {200, 200};
    size = {10, 10};
}

Pickup::~Pickup()
{

}

void Pickup::Draw()
{
    DrawCircleV(position, 5, RED);
}