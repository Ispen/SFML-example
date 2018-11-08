#include "game.h"
#include <SFML/Window.hpp>
#include "player.h"

Player *gracz;
void handleInput() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        gracz->move(-1.f, 0.f);
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        gracz->move(1.f, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        gracz->move(0.f, -1.f);
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        gracz->move(0.f, 1.f);
    }
}
Game::Game()
{
    gracz = new Player();
    this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SUPER GRA");
    // Limit the framerate to 60 frames per second (this step is optional)
    this->window->setFramerateLimit(60);
    // The main loop - ends as soon as the window is closed
}

void Game::startGame() {
    while (this->window->isOpen())
    {
       // Event processing
       handleInput();
       sf::Event event;
       while (this->window->pollEvent(event))
       {
           // Request for closing the window
           if (event.type == sf::Event::Closed)
               this->window->close();
       }
       // Activate the window for OpenGL rendering
       this->window->setActive();
       this->window->draw(gracz->sprite);
       // OpenGL drawing commands go here...
       // End the current frame and display its contents on screen
       this->window->display();
    }
}





