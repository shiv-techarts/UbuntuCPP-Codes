#ifndef GCHARACTER_H
#define GCHARACTER_H

#include <iostream>
#include <string>

class GCharacter {

    friend std::ostream& operator<<(std::ostream& out, const GCharacter& gch);

    std::string name;
    int capacity;
    int used;
    std::string* toolHolder;

public:

    //Data Members

    static const int DEFAULT_CAPACITY = 5;

    //Constructor
    GCharacter(std::string tempName = "Shiv", int tempCapacity = DEFAULT_CAPACITY);

    //Copy Constructor
    GCharacter(GCharacter& source);

    //Overloaded Assignment Operator
    GCharacter& operator=(const GCharacter& source);

    //Destructor
    ~GCharacter();

    //Member Functions
    //Insert Function

    void insert(const std::string& toolName);

};

#endif // GCHARACTER_H
