#include <iostream>
#include "gcharacter.h"

using namespace std;

int main() {

    GCharacter gc1;

    gc1.insert("AXE");
    gc1.insert("CrossBow");
    gc1.insert("Hammer");
    gc1.insert("sword");
    gc1.insert("spellBook");
    gc1.insert("spellBook2");

    cout << gc1 << endl;

    GCharacter gc2;
    GCharacter gc3 = gc1;

    gc2.insert("Virtual Hammer");

    gc2 = gc1;

    cout << gc2 << endl;
    cout << gc3 << endl;



    return 0;
}

