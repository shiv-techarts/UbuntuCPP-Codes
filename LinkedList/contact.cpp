#include "contact.h"

using namespace std;

std::ostream& operator<<(std::ostream &out, Contact &ct) {
    return out << "Name : " << ct.name;
}

Contact::Contact(std::__cxx11::string tempName) : name(tempName), next(nullptr) {
}

Contact::~Contact() {
    if(next)
        delete next;

}

//Getters Implentation

std::string Contact::getName() {
    return name;
}

Contact* Contact::getNext() {
    return next;
}

//Setters Implentation

void Contact::setName(std::string tempName) {
    name = tempName;
}

void Contact::setNext(Contact* tempNext) {
    next = tempNext;
    tempNext = nullptr;
}
