// Animal Class
#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal(int newCount, std::string newName) : nameOfAnimal(newName), noOfChild(newCount) {
    cout << "ctor called" << endl;
}

Animal::~Animal() {
    cout << "dtor called" << endl;
}
