#include <iostream>
#include <typeinfo>
#include <vector>
#include "stltest.h"

using namespace std;

STLTest::STLTest() {
    cout << "STLTest Cunstructor Called." << endl;
}

void STLTest::vectorsHero() {

    vector<string> inventory;

    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "You have " << inventory.size() << " items.\n";
    cout << "\nYour items:\n";

    for (unsigned int i = 0; i < inventory.size(); ++i) {
        cout << inventory[i] << endl;
    }

    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";

    for (unsigned int i = 0; i < inventory.size(); ++i) {
        cout << inventory[i] << endl;
    }
    cout << "\nThe item name ’" << inventory[0] << "’ has ";
    cout << inventory[0].size() << " letters in it.\n";
    cout << "\nYour shield is destroyed in a fierce battle.";

    inventory.pop_back();

    cout << "\nYour items:\n";

    for (unsigned int i = 0; i < inventory.size(); ++i) {
        cout << inventory[i] << endl;
    }

    cout << "\nYou were robbed of all of your possessions by a thief.";
    inventory.clear();

    if (inventory.empty()) {
        cout << "\nYou have nothing.\n";
    }
    else {
        cout << "\nYou have at least one item.\n";
    }

}

void STLTest::testVector() {
    vector<int> intVector;

    cout << "capacity of intVector is: " << intVector.capacity()
         << "\nsize of intVector is: " << intVector.size() << endl;
    intVector.reserve(10);
    for(int i = 0; i < 10; i++) {
        intVector.push_back(i + 1);
        cout << intVector[i] << endl;
    }

    cout << "capacity of intVector is: " << intVector.capacity()
         << "\nsize of intVector is: " << intVector.size()
         <<   "\n" << "anotherVector" << endl;

    vector<int> anotherVector(intVector);
    for(int i : anotherVector)
        cout << i << endl;
    //for(unsigned int i = 0; i < anotherVector.size(); i++) {
    //    cout << anotherVector[i] << endl;
    //}

    //*************************************
    //Iterators

    cout << "Iterators" << endl;

    vector<int>::iterator myIterator;
    vector<int>::const_iterator iter;

    for(iter = anotherVector.begin(); iter != anotherVector.end(); ++iter) {
        cout << *iter << endl;
    }

    cout << "Another insertion" << endl;

    myIterator = anotherVector.begin();

    cout << "test line\t" << &(*myIterator) << "\t" << &(*(anotherVector.begin())) << endl;

    //myIterator[5] = 255;
    anotherVector.insert(anotherVector.begin(),200);

    cout << "test line\t" << &(*myIterator) << "\t" << &(*(anotherVector.begin())) << endl;

    for(iter = anotherVector.begin(); iter != anotherVector.end(); ++iter) {
        cout << *iter << endl;
    }

    cout << "myIterator" << endl;

    //for(iter = myIterator; iter != anotherVector.end(); ++iter) {
    //    cout << *iter << endl;
    //}

}
