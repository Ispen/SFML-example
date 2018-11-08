#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>

class Player
{
public:
    Player();
    static sf::Texture texture;
    sf::Sprite sprite;
    bool move(float x, float y);
private:
    int hp;
};

#endif // PLAYER_H
