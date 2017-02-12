/**
  * Shiv Pratap Singh
  * Simple 1D Game
  * Modern C++11
  *
*/

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {

    //Random Generator
    default_random_engine random(time(NULL));
    uniform_real_distribution<float> attackStrength(0.0f, 1.0f);

    //Turn Set Variable
    char turn = '\0';

    //Human Army

    int humanCount = 0;
    float humanHealth = 200.0f;
    float humanStrength = 100.0f;

    float currentHumanHealth = humanHealth;

    //Zombies Army

    int zombiesCount = 0;
    float zombiesHealth = 100.0f;
    float zombiesStrength = 50.0f;

    float currentZombiesHealth = zombiesHealth;

    cout << "**** Human VS Zombies **** \n" << endl;
    cout << "**** By $hiv Pratap $ingh" << endl;

    cout << "Enter the total Humans: " << endl;
    cin >> humanCount;

    cout << "Enter the total Zombies: " << endl;
    cin >> zombiesCount;

    cout << "Start the turn with \n"
            "H: Human \n"
            "Z: Zombies" << endl;
    cin >> turn;

    int totalHumans = humanCount;
    int totalZombies = zombiesCount;

    while((humanCount > 0) && (zombiesCount > 0)) {

        int randVal = attackStrength(random);

        if(turn == 'H' || turn == 'h') {

            if( randVal <= humanStrength) {
                currentZombiesHealth -= humanStrength;

                if(currentZombiesHealth < 0) {
                    zombiesCount--;
                    currentZombiesHealth = zombiesHealth;
                }
            }

            turn = 'Z';

        }
        else {

            if( randVal <= zombiesStrength ) {
                currentHumanHealth -= zombiesStrength;

                if(currentHumanHealth < 0) {
                    humanCount--;
                    currentHumanHealth = humanHealth;
                }
            }

            turn = 'H';
        }
    }

    if(humanCount > 0) {
        cout << "Human Survived the battle" << endl;
        cout << "Human Left: " << totalHumans - humanCount << endl;
    }
    else {
        cout << "Zombies are too dangerous, the killed all" << endl;
        cout << totalZombies - zombiesCount << " Zombies are coming......RUN###>>#>>#>#>" << endl;
    }

    return 0;
}
