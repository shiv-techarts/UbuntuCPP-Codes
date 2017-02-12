#include <iostream>
//#include "header.h"

using namespace std;

template<class T> double sum(double a, T b) {
    return a + b;
}

int main() {
    //Header obj = new Header();

    int a = 2, b = 4;
    cout << sum(a, b) << endl;
    cout << sum(static_cast<double>(a * 4.02),static_cast<double>(b)) << endl;
    double aD = 2.04, bD = 4.02;
    cout << sum(aD, bD) << endl;
    return 0;
}
