#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "hangman.h"

using namespace std;

HangMan::HangMan() {

    //Reserving Spaces
    hmVector.reserve(8);
    userVector.reserve(5);

    //Hang Man Database
    hmVector.push_back("000");
    hmVector.push_back("001");
    hmVector.push_back("010");
    hmVector.push_back("011");
    hmVector.push_back("100");
    hmVector.push_back("101");
    hmVector.push_back("110");
    hmVector.push_back("111");
}

HangMan::~HangMan() {
    //clearing out vectors
    hmVector.clear();
    userVector.clear();
}

int HangMan::getGuess() {
    return guess;
}

void HangMan::setGuess() {
    guess = 5;
}

void HangMan::decrementGuess() {
    guess--;
}

void HangMan::hmDatabase() {
    //display hangman database
    vector<string>::const_iterator hmIter;
    for(hmIter = hmVector.begin(); hmIter != hmVector.end(); ++hmIter) {
        cout << *hmIter << ((hmIter == hmVector.end() - 1)? "\n" : ", ");
    }
}

void HangMan::usedWords() {
    //display used words
    vector<string>::const_iterator userIter;
    for(userIter = userVector.begin(); userIter != userVector.end(); ++userIter) {
        cout << *userIter << ((userIter == userVector.end() - 1)? "\n" : ", ");
    }
}

void HangMan::clearUsedWords() {
    userVector.clear();
}

bool HangMan::gameStart(string userWord, string hmWord) {
    //assinging values to used vector
    userVector.push_back(userWord);
    usedWords();

    //return compared values
    return (!userWord.compare(hmWord));

}

string HangMan::wordRand() {
    //randomize vector values
    srand(static_cast<unsigned int>(time(0)));
    int randWord = rand()%(hmVector.size());
    return hmVector[randWord];
}

void HangMan::welcome() {
    cout << "\t\tWelcome to world of Hang Man!...\n" << endl
         << "\'help\' : for help in the game\n" << endl
         << "\'quit\' : for leaving the game\n" << endl;
}

void HangMan::help() {
    cout << "System will choose a random binary number\n"
         << "From the given database, attempt to get \n"
         << "the right guess in 5 attempts." << endl;
}

void HangMan::goodBye() {
    cout << "Have a nice day!..." << endl;
}

