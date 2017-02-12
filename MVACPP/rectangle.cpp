#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle() {
    cout << "Rectangle Constructor Called " << endl;
}

Rectangle::~Rectangle() {
     cout << "Rectangle Distructor Called " << endl;
}

MVATest::~MVATest() {
     cout << "MVA Virtual Distructor Called " << endl;
}

void MVATest::setVal(int x, int y) {
    MVATest * obj = new MVATest;
    obj->height = x;
    obj->width = y;
}
