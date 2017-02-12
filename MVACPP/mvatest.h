#ifndef MVATEST_H
#define MVATEST_H

#include <iostream>

class MVATest {
    //friend void showVal();
private:
    int height;
    int width;
public:
    MVATest();
    MVATest(int, int);
    void getVal();
    void showVal();
    virtual void setVal(int, int);
    virtual ~MVATest();
};

#endif // MVATEST_H
