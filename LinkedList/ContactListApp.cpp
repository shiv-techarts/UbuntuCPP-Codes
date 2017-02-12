#include <iostream>
#include "contactlist.h"

using namespace std;

int main() {

    ContactList* list = new ContactList();

    string name;

    while(1) {

        cout << "Enter the name to save: ";
        cin >> name;

        if(name == "Q" || name == "q")
            break;

        list->insert(name);
    }

    cout << "You Had Entered: " << endl;
    list->printList(0);

    while(1) {

        cout << "Enter the name to delete: ";
        cin >> name;

        if(name == "Q" || name == "q")
            break;

        list->deleteNode(name);
    }

    cout << "Remaining List: " << endl;
    list->printList(1);

    return 0;
}

