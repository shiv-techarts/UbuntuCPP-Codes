#ifndef DESIGNER_H
#define DESIGNER_H

#include <iostream>
#include <cstdlib>
#include "gamespecs.h"
#include "player.h"

class Player;

class Designer {
protected:
    void makeToCenter(int size);
public:
    Designer();

    char gridMap[3][3];

    void grid(PLACE placeTosym);
    void welcomeMessage();
    void clearScreen(int p_OS);
    void currentPlayer(Player* ctPlayer);
    void displayGrid();
};

#endif // DESIGNER_H
