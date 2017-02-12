#include "gcharacter.h"

using namespace std;

ostream& operator<<(ostream& out, const GCharacter& gch) {
    out << "Game character " << gch.name << " With following tools " << endl;

    out << " | ";

    for(int i = 0 ; i < gch.used; i++) {
        out << gch.toolHolder[i] + " | ";
    }

    return out;
}

GCharacter::GCharacter(std::__cxx11::string tempName, int tempCapacity) : name(tempName), capacity(tempCapacity) {
    used = 0;
    toolHolder = new string[tempCapacity];

    cout << "ctor called" << endl;
}

GCharacter::GCharacter(GCharacter& source) {
    cout << "copy ctor called" << endl;

    this->name = source.name;
    this->capacity = source.capacity;
    this->used = source.used;
    this->toolHolder = new string[source.capacity];

    copy(source.toolHolder, source.toolHolder + this->used, this->toolHolder );
}

GCharacter &GCharacter::operator=(const GCharacter &source) {
    cout << "assignement operator called" << endl;

    //Checking for self assignement

    if(this != &source) {
        this->name = source.name;
        this->capacity = source.capacity;
        this->used = source.used;
        this->toolHolder = new string[source.capacity];

        copy(source.toolHolder, source.toolHolder + this->used, this->toolHolder );
    }

    return *this;

}

GCharacter::~GCharacter() {

    cout << "dtor called for " << this->name << " At memory address: " << this << endl;

    if(toolHolder)
        delete[] toolHolder;
    //toolHolder = nullptr;
}

void GCharacter::insert(const std::__cxx11::string& toolName) {
    if(used == capacity) {
        cout << "Tool Holder is full." << endl;
        //return;
    }
    else {
        toolHolder[used] = toolName;
        used++;
    }

}
