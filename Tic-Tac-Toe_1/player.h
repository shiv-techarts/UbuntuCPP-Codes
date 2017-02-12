#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "gamespecs.h"
#include "designer.h"

class Player {
    std::string playerName;
    char symbol;
    static int countPlayer;
public:

    PLACE currentPlace;

    Player(std::string p_playerName, char p_symbol);
    ~Player();

    void currentPos();

    inline int getPlayerCount() {
        return countPlayer;
    }

    inline const std::string getPlayerName() const {
        return playerName;
    }

    inline char getSymbol() {
        return symbol;
    }
};

#endif // PLAYER_H
