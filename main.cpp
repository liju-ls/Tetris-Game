
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Main.hpp>
#include <iostream>
#include "container.h"
#include "shapeGen.h"

int WinMain()
{

    sf::RenderWindow gameWindow(sf::VideoMode(600, 800), "Tetris Game");
    Square squareShape(250, 0);

    while (gameWindow.isOpen())
    {
        gameWindow.clear(sf::Color::Red);

        drawContainer(gameWindow);
        sf::Event event;
        squareShape.drawSquare(gameWindow);

        while (gameWindow.pollEvent(event))
        {

            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                gameWindow.close();

            if (event.type == sf::Event::KeyPressed)
            {
                switch (event.key.scancode)
                {
                case sf::Keyboard::Scancode::Left:
                    squareShape.moveLeft();
                    break;

                case sf::Keyboard::Scancode::Right:
                    squareShape.moveRight();
                    break;

                default:
                    break;
                }
            }
        }

        gameWindow.display();
    }

    return 0;
}