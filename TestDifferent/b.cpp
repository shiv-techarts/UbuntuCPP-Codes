#include <iostream>
#include "b.h"

using namespace std;

B::B() {
    cout << "B - C -> " << this << endl;
}

B::~B() {
    cout << "B - D -> " << this << endl;
}
