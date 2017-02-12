#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
    std::string nameOfAnimal;
    int noOfChild;

public:

    explicit Animal(int newCount, std::string newName);
    virtual ~Animal();

    inline void setNameOfAnimal(std::string newName) { this->nameOfAnimal = newName; }
    inline void setNoOfChild(int newCount) { this->noOfChild = newCount; }
    inline std::string getNameOfAnimal() { return this->nameOfAnimal; }
    inline int getNoOfChild() { return this->noOfChild; }



};

#endif // ANIMAL_H
