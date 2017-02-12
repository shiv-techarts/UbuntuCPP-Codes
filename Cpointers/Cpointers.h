/*
 * Cpointers.h
 *
 *  Created on: 25-May-2016
 *      Author: shiv
 */

#ifndef CPOINTERS_H_
#define CPOINTERS_H_

#include <iostream>

struct EMPLOYEE {
    int regno;
    std::string name;
};

class Cpointers {
public:
	Cpointers();
	void pointers();
	void pointers() const;
	void dynamicPointer();
	void dynamicPointer() const;
    void dynamicData();
    void dynamicData() const;
    void dynamic2DMatrix(const int);
    void stringTest();
	virtual ~Cpointers();
};

#endif /* CPOINTERS_H_ */
