
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Main.hpp>
#include <iostream>
#include "container.h"

int WinMain()
{

    sf::RenderWindow gameWindow(sf::VideoMode(600, 800), "Tetris Game");

    while (gameWindow.isOpen())
    {
        gameWindow.clear(sf::Color::Red);

        drawContainer(gameWindow);

        sf::Event event;
        while (gameWindow.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                gameWindow.close();
        }

        gameWindow.display();
    }

    return 0;
}