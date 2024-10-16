#ifndef CONTAINER
#define CONTAINER

#include <SFML/Graphics.hpp>
#include "shape.h"

void drawContainer(sf::RenderWindow &window)
{
    int movement = 50;

    for (int i = 0; i < 16; i++)
    {
        sf::RectangleShape shape = draw(50, 50, 0, 0 + movement * i);
        window.draw(shape);
    }

    for (int i = 0; i < 16; i++)
    {
        sf::RectangleShape shape = draw(50, 50, 550, 0 + movement * i);
        window.draw(shape);
    }

    for (int i = 0; i < 10; i++)
    {
        sf::RectangleShape shape = draw(50, 50, 50 + movement * i, 750);
        window.draw(shape);
    }
}

#endif