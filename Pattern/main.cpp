#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <chrono>
#include <thread>

using namespace std;

int main() {

    vector<int> v(20);
    auto seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine rand(seed);
    uniform_int_distribution<int> uDist(2, 80);

    vector<int>::iterator it;
    while(true) {
        for(it = v.begin(); it != v.end(); it++) {
            *it = uDist(rand);
        }

        for(it = v.begin(); it != v.end(); it++) {
            cout << string( *it, '*') << endl;
        }
        this_thread::sleep_for(0.2s);
        system("clear");
    }
    return 0;
}
