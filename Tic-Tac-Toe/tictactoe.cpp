#include <iostream>
#include "tictactoe.h"

using namespace std;

TicTacToe::TicTacToe() {
    cout << "Game Begins......" << endl;
}

void TicTacToe::game0() {

    const int ROWS = 3;
    const int COLUMNS = 3;

    char board[ROWS][COLUMNS] = {{'0','X','0'},{' ','X','X'},{'X','0','0'}};
    //char (*board)[COLUMNS] = new char[ROWS][COLUMNS];

    cout << "Here’s the tic-tac-toe board:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
             cout << board[i][j];
        }
        cout << endl;
    }

    cout << "\n’X’ moves to the empty location.\n\n";

    board[1][0] = 'X';

    cout << "Now the tic-tac-toe board is:\n";
    for (int i = 0; i < ROWS; ++i) {
         for (int j = 0; j < COLUMNS; ++j) {
        cout << board[i][j];
        }
        cout << endl;
    }

    cout << "\n’X’ wins!";
}

