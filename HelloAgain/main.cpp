#include <iostream>

using namespace std;

void operator<<(string& echo, string& message) {
    cout << echo + message;
}

int main() {
    string echo = "Hello, ";
    string name;

    cout << "Enter a name: " << endl;
    cin >> name;

    echo << name;

    cout << endl;

    return 0;
}
