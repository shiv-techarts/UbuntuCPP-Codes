/*
 * Shiv Pratap Singh
 * shiv.safari@gmail.com
 *
 * A Console based jumble word game
 *
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cstdio>
#include "jumblegame.h"

#define OS 1 // for Linux
//#define OS 0 // for WINDOWS

using namespace std;

int main()
{

    string choice;
    vector<JumbleGame*> obj;

    //Assigning Values
    //JumbleGame * obj = new JumbleGame("check","this is a check hint");
    obj.push_back(new JumbleGame("welcome","farewell"));
    obj.push_back(new JumbleGame("gratitude","appreciation"));
    obj.push_back(new JumbleGame("abandon","empty"));
    obj.push_back(new JumbleGame("reward","payoff"));
    obj.push_back(new JumbleGame("excitement","fervor"));

    char more = 'N';
    int flag = 0;
    int repeat = 0;

    do {
        //seed random function
        srand(static_cast<unsigned int>(time(0)));

        int chance = 3;
        flag = 0;
        //clear the screen
    #ifdef OS
        system("clear");
    #else
        system("cls");
    #endif

        more = 'N';

        int wordForDay = rand()%(obj.size());

        if(wordForDay == repeat)
            wordForDay = rand()%(obj.size());

        repeat = wordForDay;

        obj[wordForDay]->welcome();

        cout << "Todays Word is:" << obj[wordForDay]->randWord() << endl;

        do {
            cout << "Enter your guess: ";
            cin >> choice;
            if(choice == obj[wordForDay]->getWord()) {
                cout << "\nCorrect!...\nYou Won!..." << endl;
                chance = 3;
                break;
            }
            else if(choice == "hint") {
                cout << "\n" << obj[wordForDay]->getHelp() << endl;
                chance = 3;
                //break;
            }
            else if(choice == "quit") {
                obj[wordForDay]->goodBye();
                flag = 1;
                break;
            }
            else {
                cout << "\nWrong!...\nRemaining Attempt: " << --chance<< endl;
            }
        }while(chance > 0);
        if(chance == 0) {
            cout << "You Lost!..." << endl;
            flag = 1;
        }

        //delete obj[wordForDay]; // don't uncomment it, it will destroy links to objects.

        if(flag == 0) {
            cout << "\nWant to play more (Y/N)" << endl;
            cin >> more;
        }

    }while((more == 'Y' || more == 'y') && flag == 0);

    return 0;
}
