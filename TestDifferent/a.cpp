#include <iostream>
#include "a.h"

using namespace std;

A::A() {
    cout << "A - C -> " << this << endl;
}

A::~A() {
    cout << "A - D -> " << this << endl;
}
