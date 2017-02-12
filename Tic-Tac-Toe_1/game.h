#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>
#include "gamespecs.h"
#include "player.h"
#include "designer.h"

class Game {
    Player* player1;
    Player* player2;

    Designer* grid;

    int chance;
    //char currentSym;

public:
    Game();
    ~Game();

    void start();
    void play();
    void stop(char sym);
    void currentChance();
    bool checkWinner();
    bool reCheckPos(Player* player);
};

#endif // GAME_H
