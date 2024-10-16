#ifndef SHAPE_GEN
#define SHAPE_GEN

#include <SFML/Graphics.hpp>
#include "shape.h"

class Shape
{

public:
    float x;
    float y;

    Shape(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void moveLeft()
    {
        if (x > 50)
        {

            x -= 50;
        }
    }

    void moveRight()
    {
        if (x < 450)
        {
            x += 50;
        }
    }

    void move()
    {
        if (y < 650)
        {
            y += 0.03;
        }
    }
};

class Square : public Shape
{

public:
    Square(int x, int y) : Shape(x, y)
    {
    }

    void drawSquare(sf::RenderWindow &window)
    {
        sf::RectangleShape shape1 = draw(50, 50, x, y);
        sf::RectangleShape shape2 = draw(50, 50, x + 50, y);
        sf::RectangleShape shape3 = draw(50, 50, x, y + 50);
        sf::RectangleShape shape4 = draw(50, 50, x + 50, y + 50);

        window.draw(shape1);
        window.draw(shape2);
        window.draw(shape3);
        window.draw(shape4);

        move();
    }
};

#endif