#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics/RenderWindow.hpp>

class Game
{
public:
    Game();
    void startGame();
private:
    sf::RenderWindow *window;
};

#endif // GAME_H
