#include <iostream>
#include "mvatest.h"
#include "rectangle.h"

using namespace std;

int main() {
    MVATest * objP = new MVATest();
    objP->getVal();
    delete objP;
    objP = new MVATest(5,5);
    objP->getVal();
    Rectangle * rect = new Rectangle();
    rect->setVal(1,1);
    rect->getVal();
    delete rect;
    return 0;
}
