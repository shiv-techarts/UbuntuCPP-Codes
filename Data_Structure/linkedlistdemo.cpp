#include "linkedlistdemo.h"

template <class T>
void LinkedListDemo<T>::addFirst(Node<T>* tempNode) {
    head = tempNode;
    tail = tempNode;
    count++;
}

template <class T>
LinkedListDemo<T>::LinkedListDemo() {

}

template <class T>
LinkedListDemo<T>::~LinkedListDemo() {
    if(head != nullptr)
        delete head;
    if(tail != nullptr)
        delete tail;
}

template <class T>
void LinkedListDemo<T>::add(Node<T>* tempNode) {

    if(count == 0) {
        addFirst(tempNode);
        return;
    } else {
        tail = tempNode;
        count++;
    }

}

template <class T>
Node<T> *LinkedListDemo<T>::search(T tempData) {
    for(auto i = head; i != tail; i++) {
        if(i->getData() == tempData) {
            return i;
        }
    }

    return nullptr;
}

template <class T>
void LinkedListDemo<T>::remove(Node<T> *tempNode) {

    Node<T>* nextNode;
    Node<T>* i;

    for(i = head; i != tail; i++) {
        if(i->getNext() == tempNode) {
            nextNode = tempNode->getNext();
            break;
        }
    }

    i->setNext(nextNode);

    delete tempNode;

}

