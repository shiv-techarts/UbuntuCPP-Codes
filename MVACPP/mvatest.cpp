#include <iostream>
#include "mvatest.h"

using namespace std;

MVATest::MVATest() : height{}, width{} {
    cout << "MVA Test Class Default Constructor Called" << endl;
    cout << "MVA Constructor" << " " << height << " " << width << endl;
}

MVATest::MVATest(int, int) {
    cout << "MVA Test Class Parametrized Constructor Called" << endl;
    cout << "MVA P Constructor" << " " << height << " " << width << endl;
}

void MVATest::getVal() {
    cout << "MVA getVal " << height << " " << width << endl;
}


void MVATest::showVal() {
    cout << "MVA showVal " << height << " " << width << endl;
}
