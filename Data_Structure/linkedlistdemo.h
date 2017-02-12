#ifndef LINKEDLISTDEMO_H
#define LINKEDLISTDEMO_H

#include "node.h"

template<class T>
class LinkedListDemo {

    Node<T>* head;
    Node<T>* tail;
    static int count;

    void addFirst(Node<T>* tempNode);

public:
    LinkedListDemo();
    ~LinkedListDemo();

    //Operations

    //Add
    void add(Node<T>* tempNode);

    //Remove
    void remove(Node<T>* tempNode);

    //Insert

    //Delete

    //Search
    Node<T>* search(T tempData);

    //Traverse
};

//#include "linkedlistdemo.cpp"

#endif // LINKEDLISTDEMO_H
