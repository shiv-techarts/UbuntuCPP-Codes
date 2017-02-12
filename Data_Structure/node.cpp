#include "node.h"

template<class T>
Node<T>::Node(T newData) : data(newData) {
    next = nullptr;
}

template<class T>
Node<T>::Node(T newData, Node<T>*newNext) : data(newData), next(newNext) {
}

template<class T>
T Node<T>::getData() {
    return data;
}

template<class T>
Node<T>* Node<T>::getNext() {
    return next;
}

template<class T>
void Node<T>::setData(T newData) {
    data = newData;
}

template<class T>
void Node<T>::setNext(Node<T>* newNext) {
    next = newNext;
}
