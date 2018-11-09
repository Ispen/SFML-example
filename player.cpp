#include "player.h"
#include <SFML/Graphics.hpp>
sf::Texture Player::texture;
Player::Player()
{
    this->hp = 100;
//    this->texture.loadFromFile("./ehhh.jpg");
    Player::texture.loadFromFile("./ehhh.jpg");
    this->sprite.setTexture(Player::texture, new sf::IntRect(0,0,500,430));
}

bool Player::move(float x, float y) {
    auto myPos = this->sprite.getPosition();
    this->sprite.setPosition(myPos.x + x, myPos.y + y);
    return true;
}
