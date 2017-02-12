#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
    friend std::ostream& operator<<(std::ostream& out, Contact& ct);
    //friend class ContactList;
public:
    Contact(std::string tempName = "none");
    ~Contact();

    //Getters
    std::string getName();
    Contact* getNext();

    //Setters
    void setName(std::__cxx11::string tempName);
    void setNext(Contact *tempNext);

private:
    std::string name;
    Contact* next;

};

#endif // CONTACT_H
