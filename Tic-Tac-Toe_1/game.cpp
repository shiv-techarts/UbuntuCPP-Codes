#include "game.h"

using namespace std;

Game::Game() {
    this->player1 = nullptr;
    this->player2 = nullptr;
    this->grid = nullptr;
    //this->currentSym = '\0';

    chance = 0;
}

Game::~Game() {

    if(player1)
        delete player1;
    if(player2)
        delete player2;
    if(grid)
        delete grid;
}

void Game::start() {
    grid = new Designer();
    grid->clearScreen(OS);
    grid->welcomeMessage();

    string firstPlayer;
    char firstPlayerSym = '\0';

    cout << "Enter name for first player" << endl;
    cin >> firstPlayer;
    cout << "Enter the Symbol for first player" << endl;
    cin >> firstPlayerSym;

    string secondPlayer;
    char secondPlayerSym = '\0';

    cout << "Enter name for second player" << endl;
    cin >> secondPlayer;
    cout << "Enter the Symbol for second player" << endl;
    cin >> secondPlayerSym;

    player1 = new Player(firstPlayer, firstPlayerSym);
    player2 = new Player(secondPlayer, secondPlayerSym);

}

void Game::play() {

    int i = 0;

    bool status = false;

    while(i < 9) {
        if(i % 2 == 0)
            chance = 0;
        else
            chance = 1;

        status = checkWinner();
        if(status)
            break;

        currentChance();
        grid->clearScreen(OS);
        i++;
    }

    cout << endl;
    cout << "Final Grid: " << endl;
    grid->displayGrid();


}

void Game::stop(char sym) {
    if(sym == player1->getSymbol()) {
        cout << "\n:--" << player1->getPlayerName() << " Won" << endl;
        cout << "Thank you for playing...." << endl;
    }
    else if (sym == player2->getSymbol()){
        cout << "\n:--" << player2->getPlayerName() << " Won" << endl;
        cout << "Thank you for playing...." << endl;
    }
    else {
        cout << "\nMatch was a tie" << endl;
        cout << "Thank you for playing...." << endl;
    }
}

void Game::currentChance() {
    grid->clearScreen(OS);
    grid->displayGrid();
    //checkWinner();
    if(!chance) {
        grid->currentPlayer(player1);
        while(reCheckPos(player1));
        grid->grid(player1->currentPlace);
        //return player1;
    }
    else {
        grid->currentPlayer(player2);
        while(reCheckPos(player2));
        grid->grid(player2->currentPlace);
        //return player2;
    }
}

bool Game::checkWinner() {

    char ch = '\0';
    int count = 0;
    bool flag = false;

    char p1 = player1->getSymbol();
    char p2 = player2->getSymbol();

    for(int i = 0; i < 3; i++) {

        if(grid->gridMap[i][0] == p1 && grid->gridMap[i][1] == p1 && grid->gridMap[i][2] == p1) {
            ch = p1;
            flag = true;
            break;
        }
        else if(grid->gridMap[0][i] == p1 && grid->gridMap[1][i] == p1 && grid->gridMap[2][i] == p1) {
            ch = p1;
            flag = true;
            break;
        }
        else if(grid->gridMap[i][0] == p2 && grid->gridMap[i][1] == p2 && grid->gridMap[i][2] == p2) {
            ch = p1;
            flag = true;
            break;
        }
        else if(grid->gridMap[0][i] == p2 && grid->gridMap[1][i] == p2 && grid->gridMap[2][i] == p2) {
            ch = p1;
            flag = true;
            break;
        }
    }

    if(flag) {
        if(grid->gridMap[0][0] == p1 && grid->gridMap[1][1] == p1 && grid->gridMap[2][2] == p1) {
            ch = p1;
            flag = true;
        }
        else if(grid->gridMap[0][2] == p1 && grid->gridMap[1][1] == p1 && grid->gridMap[2][0] == p1) {
            ch = p1;
            flag = true;
        }
        else if(grid->gridMap[0][0] == p2 && grid->gridMap[1][1] == p2 && grid->gridMap[2][2] == p2) {
            ch = p1;
            flag = true;
        }
        else if(grid->gridMap[0][2] == p2 && grid->gridMap[1][1] == p2 && grid->gridMap[2][0] == p2) {
            ch = p1;
            flag = true;
        }
        else {
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    if( grid->gridMap[i][j] != '\0')
                        count++;
                }
            }
        }
    }

    if(flag || count == 8) {
        stop(ch);
        return true;
    }
    else
        return false;

}

bool Game::reCheckPos(Player *player) {
    player->currentPos();
    int x = player->currentPlace.x;
    int y = player->currentPlace.y;

    if(grid->gridMap[x][y] == '\0') {
        return false;
    }
    else {
        return true;
    }
}

