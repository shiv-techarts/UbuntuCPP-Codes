/**
  * Shiv Pratap Singh
  * 28 Dec 2017
  * Game Fun Programming fun
  *
  */

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

namespace Game {
    void init() {
        default_random_engine randomGenerator(time(0));
        uniform_real_distribution<float> attackRoll(0.0f, 1.0f);

        cout << "Random Number is: " << attackRoll(randomGenerator) << endl;
        cout << "Random Number is: " << attackRoll(randomGenerator) << endl;
        cout << "Random Number is: " << attackRoll(randomGenerator) << endl;
        cout << "Random Number is: " << attackRoll(randomGenerator) << endl;
        cout << "Random Number is: " << attackRoll(randomGenerator) << endl;
    }
}

int main() {
    Game::init();
    return 0;
}

