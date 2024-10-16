
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Main.hpp>
#include <iostream>

int WinMain()
{

    sf::RenderWindow gameWindow(sf::VideoMode(600, 800), "Tetris Game");

    while (gameWindow.isOpen())
    {
        sf::Event event;
        while (gameWindow.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                gameWindow.close();
        }

        gameWindow.clear(sf::Color::Red);
        gameWindow.display();
    }

    return 0;
}