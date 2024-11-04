#include <iostream>

#include "Vector2.h"
#include "Alive.h"

int main()
{
    Vector2 a(1.0f, 1.0f);

    Alive hp(50, 50);

    a.SetPos(1.5, 1.5);
    a.GetPosX();
    std::cout << a.GetPosX();
    a.GetPosY();
    std::cout << a.GetPosY();

}