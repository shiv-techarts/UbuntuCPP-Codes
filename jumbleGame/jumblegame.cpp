#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "jumblegame.h"

using namespace std;

JumbleGame::JumbleGame(string sWord, string sHint) : word(sWord), hint(sHint){

}

const string JumbleGame::randWord() {
    string toJumble = word;

    srand(static_cast<unsigned int>(time(0)));

    /*for(auto i : word) {
        int index1 = (rand() % toJumble.size());
        int index2 = (rand() % toJumble.size());
        char temp = toJumble[index1];
        toJumble[index1] = toJumble[index2];
        toJumble[index2] = temp;
    }*/

    random_shuffle(toJumble.begin(),toJumble.end());

    if(toJumble == word)
        randWord();
    return toJumble;
}

const string JumbleGame::getWord() {
    return this->word;
}

const string JumbleGame::getHelp() {
    return this->hint;
}

void JumbleGame::welcome() {
    cout << "\t\tWelcome to world of jumbling!...\n" << endl
         << "\'hint\' : for hint" << endl
         << "\'quit\' : for leaving the game\n" << endl;
}

void JumbleGame::goodBye() {
    cout << "Have a nice day!..." << endl;
}
