/*
 * main.cpp
 *
 *  Created on: 25-May-2016
 *      Author: shiv
 */
#include <iostream>
#include "Cpointers.h"

using namespace std;

int main() {
		Cpointers * objP = new Cpointers();
        //objP->pointers();
        //objP->dynamicPointer();
        //objP->dynamicData();

        //const int size = 9;

        //objP->dynamic2DMatrix(9);

        objP->stringTest();

		delete objP;
		return 0;
}



