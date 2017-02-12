#include <iostream>
#include "tictactoe.h"

using namespace std;

int main()
{
    TicTacToe * gameStart = new TicTacToe();
    gameStart->game0();
    delete gameStart;
    return 0;
}
