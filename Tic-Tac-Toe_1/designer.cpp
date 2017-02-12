#include "designer.h"

using namespace std;

void Designer::makeToCenter(int size) {
    for(int k = 0; k < size; k++)
        cout << " ";
}

Designer::Designer() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            gridMap[i][j] = '\0';
        }
    }
}

void Designer::grid(PLACE placeToSym) {

    if(placeToSym.x != -1 && placeToSym.y != -1)
        gridMap[placeToSym.x][placeToSym.y] = placeToSym.sym;

    makeToCenter(18);
    for(int j = 0; j < 3; j++) {
        cout << j << "   ";
    }
    cout << endl;
    makeToCenter(15);
    cout << "-----+---+----" << endl;

    for(int i = 0; i < 3; i++) {
        makeToCenter(15);
        cout << i << ": ";
        for(int j = 0; j < 3; j++) {
            cout << gridMap[i][j];
            if(gridMap[i][j] == '\0')
                cout << " ";
            if(j != 2)
                cout << " | ";
        }
        cout << endl;
        if(i != 2) {
            makeToCenter(15);
            cout << "-----+---+----" << endl;
        }
    }
    cout << endl;

}

void Designer::welcomeMessage() {
    cout << "-------Welcome to Tic Tac Toe 1.0-------" << endl;
    cout << "------------Game of Legends-------------" << endl;
    cout << "----------By Shiv Pratap Singh----------" << endl;
    cout << "" << endl;
    displayGrid();
}

void Designer::clearScreen(int p_OS) {
    if(p_OS == WIN)
        system("cls");
    else
        system("clear");
}

void Designer::currentPlayer(Player* ctPlayer) {
    cout << "Play: " << ctPlayer->getPlayerName() << endl;
    ctPlayer = nullptr;
}

void Designer::displayGrid() {
    PLACE place;
    place.x = -1;
    place.y = -1;
    place.sym = '\0';
    grid(place);
}

