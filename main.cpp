#include <iostream>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <map>

#include "game.h"
using namespace std;



int main(int, char const**)
{
    auto game = new Game();


    game->startGame();
    return 0;
}
