#include <iostream>
#include "game.h"

int main() {

    Game* game = new Game();

    game->start();
    game->play();

    delete game;

    return 0;
}

