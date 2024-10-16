#ifndef SHAPE
#define SHAPE

#include <SFML/Graphics.hpp>

sf::RectangleShape draw(int width, int height, int x, int y)
{
    sf::RectangleShape shape;
    shape.setPosition(x, y);
    shape.setSize(sf::Vector2f(width, height));
    shape.setFillColor(sf::Color::Black);
    return shape;
}

#endif