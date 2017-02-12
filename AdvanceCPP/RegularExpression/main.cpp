#include <iostream>
#include <string>
#include <chrono>
#include <regex>

using namespace std;

#define LINUX

int main() {
    auto start = chrono::steady_clock::now();

    // TODO

    string str = "";
    while(str != "quit") {

        string matchString = "";
        str = "";
        cout << "Enter regex string: " << endl;
        getline(cin, matchString);

        while(str != "break") {
            cout << endl;
            cout << "Enter a String: " << endl;
            getline(cin, str);
            regex m(matchString);
            bool match = regex_match(str, m);
            cout << ( match ? "Match" : "Not Matched" ) << endl;
            cout << endl;
        }
        #ifdef LINUX
            system("clear");
        #elif
            system("cls");
        #endif
    }

    // TODO END

    auto end = chrono::steady_clock::now();
    auto duration = end - start;
    cout << "Time Elapsed: "
         << chrono::duration<double, milli>(duration).count() << "ms" << endl;
    return 0;
}
