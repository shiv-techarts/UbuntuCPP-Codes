#include <iostream>

using namespace std;

class CheckerBoard {
public:

    void initBoard() {
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if((i + j) % 2 == 0) {
                    board[i][j] = '*';
                }
                else {
                    board[i][j] = '#';
                }
            }
        }
    }

    void printBoard() {
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cout << board[i][j];
                if(j != 7)
                    cout << " | ";
            }
            cout << endl;
        }
    }

private:
    char board[8][8];
};

int main() {

    CheckerBoard obj;
    obj.initBoard();
    obj.printBoard();

    std::getchar();
    return 0;
}

