#include "player.h"

using namespace std;

int Player::countPlayer;

Player::Player(string p_playerName, char p_symbol) :
        playerName(p_playerName), symbol(p_symbol) {
    currentPlace.x = 0;
    currentPlace.y = 0;
    currentPlace.sym = symbol;
    countPlayer++;
}

Player::~Player() {

    //if(currentPlace)
    //    delete currentPlace;

}

void Player::currentPos() {

    //bool loop = false;

    do {
        cout << "Enter the co-ordinates of pos:" << endl;
        cout << "X: ";
        cin >> currentPlace.x;

        cout << endl;

        cout << "Y: ";
        cin >> currentPlace.y;

        if(currentPlace.x >= 0 && currentPlace.x <= 2 && currentPlace.y >= 0 && currentPlace.y <= 2) {
            break;
        }


   } while(1);

}

