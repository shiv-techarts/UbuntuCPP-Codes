#include "contactlist.h"

using namespace std;

int ContactList::_size;

ContactList::ContactList() : head(nullptr) {
    _size = 0;
}

ContactList::~ContactList() {
    if(head)
        delete head;
}

void ContactList::addToHead(const std::__cxx11::string &name) {

    Contact* newNode = new Contact(name);

    if(head == NULL) {
        head = newNode;
    }
    else {
        newNode->setNext(head);
        head = newNode;
    }

    _size++;
}

void ContactList::printList(int dir) {
    dir == 0 ? printWorker(head) : reversePrintWorker(head);
}

void ContactList::printWorker(Contact* tp) {
    if(tp != nullptr) {
        //Operations

        cout << *tp << endl;

        printWorker( tp->getNext() );
    }

    //tp = nullptr;
}

void ContactList::reversePrintWorker(Contact* tp) {
    if(tp != nullptr) {
        //Operations
        reversePrintWorker( tp->getNext() );
        cout << *tp << endl;
    }

    //tp = nullptr;
}

void ContactList::insert(const string &name) {

    Contact* newNode = new Contact(name);

    Contact* trail = nullptr;
    Contact* current = head;

    if(current == nullptr)
        addToHead(name);
    else {

        while(current != nullptr) {
            if( current->getName() >= newNode->getName() ) {
                break;
            }
            else {
                trail = current;
                current = current->getNext();
            }
        }

        //Add to head with a element - Case 1
        if(current == head) {
            newNode->setNext(head);
            head = newNode;
        }
        else {
            //Add in between - case 2
            newNode->setNext(current);
            trail->setNext(newNode);
        }

    }

    _size++;

    current = nullptr;
    trail = nullptr;

}

void ContactList::deleteNode(const string &name) {
    if(isEmpty())
        cout << "List is Empty" << endl;
    else {

        Contact* trail = nullptr;
        Contact* current = head;

        while(current != nullptr) {
            if(current->getName() == name) {
                break;
            }
            else {
                trail = current;
                current = current->getNext();
            }
        }

        if(current == nullptr)
            cout << "Element Not Found!..." << endl;
        else {
            //Delete from head
            if(current == head) {
                head = head->getNext();
            }
            else {
                trail->setNext(current->getNext());
            }
            //delete current;
        }

        current = nullptr;
        trail = nullptr;
    }
}

int ContactList::size() {
    return _size;
}

bool ContactList::isEmpty() {
    return ( ( head == nullptr ) ? true : false );
}
