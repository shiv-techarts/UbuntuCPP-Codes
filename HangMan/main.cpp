/*
 * Shiv Pratap Singh
 * shiv.safari@gmail.com
 *
 * A console based hang man game using vectors.
*/

#include <iostream>
#include "hangman.h"

#define OS 1 //for LINUX
//#define OS 0 //for WINDOWS

using namespace std;

int main() {

    string choice;
    char more = 'N';
    int flag = 0;

    do {
        HangMan * obj = new HangMan();

        obj->setGuess();
        flag = 0;

        //clear the screen
        #ifdef OS
            system("clear");
        #else
            system("cls");
        #endif

        more = 'N';

        obj->welcome();
        obj->hmDatabase();
        obj->clearUsedWords();

        //Get randomized word
        string hmWord = obj->wordRand();

        //cout << hmWord << endl;

        do {

            cout << "\nEnter your guess: ";
            cin >> choice;

            if(choice == "help") {
                obj->help();
                //break;
            }
            else if(choice == "quit") {
                obj->goodBye();
                delete obj;
                flag = 1;
                break;
            }
            else if(obj->gameStart(choice,hmWord)) {
                cout << "\nCorrect!...\nYou Won!..." << endl;
                break;
            }
            else {
                obj->decrementGuess();
                cout << "\nWrong!...\nRemaining Attempt: " << obj->getGuess()<< endl;
            }
        }while(obj->getGuess() > 0);
        if(obj->getGuess() == 0) {
            cout << "You Lost!..." << endl;
            flag = 1;
        }

        if(flag == 0) {
            delete obj;
            cout << "\nWant to play more (Y/N)" << endl;
            cin >> more;
        }

    }while((more == 'Y' || more == 'y') && flag == 0);

    return 0;
}
