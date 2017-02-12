#ifndef NODE_H
#define NODE_H

template<class T>
class Node {

    T data;
    Node<T>* next;

public:
    Node(T newData);
    Node(T newData, Node<T>* newNext);

    //Getters
    T getData();
    Node<T> *getNext();

    //setters
    void setData(T newData);
    void setNext(Node<T>* newNext);
};

#include "node.cpp"

#endif // NODE_H
