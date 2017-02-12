#include <iostream>
#include <string>
#include <memory>
#include "animal.h"

using namespace std;

int main() {

    unique_ptr<Animal> animal(new Animal(1, "Pooh"));
    {
        auto secondAnimal = make_unique<Animal>(2, "Dog");

        cout << secondAnimal->getNameOfAnimal() << endl;
    }
    cout << animal->getNameOfAnimal() << endl;
    //cout << secondAnimal->getNameOfAnimal() << endl;

    return 0;
}
