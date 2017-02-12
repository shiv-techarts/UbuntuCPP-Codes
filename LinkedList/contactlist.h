#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <iostream>
#include <string>
#include "contact.h"

class ContactList {
public:
    ContactList();
    ~ContactList();

    //Add an elelment
    void addToHead(const std::string& name);

    //Traverse a List
    void printList(int dir);

    //Insert Function
    void insert(const std::string& name);

    //Delete Function
    void deleteNode(const std::string& name);

    //size of contact List
    int size();

    //Check for empty
    bool isEmpty();

private:
    void printWorker(Contact* tp);
    void reversePrintWorker(Contact* tp);

    Contact* head;
    static int _size;
};

#endif // CONTACTLIST_H
