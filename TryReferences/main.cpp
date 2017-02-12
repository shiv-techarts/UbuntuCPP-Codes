#include <iostream>
#include <string>

using namespace std;

class A {

    static int _count;

    A() {
        cout << "A Constructor Called: " << _count << endl;
    }

public:

    static A* getInstance() {
        if(_count == 0) {
            _count++;
            return (new A());
        }
        else {
            return nullptr;
        }
    }

    string aHello() {
        return "Hell ....... oooooo" ;
    }

    ~A() {
        cout << "A Destructor Called!.." << endl;
    }

};

int A::_count;

class B {
public:

    int value;

    B() : value(10) {
        cout << "B Constructor Called: " << endl;
    }

    explicit B(int temp) : value(temp) {
        cout << "B Constructor Called: " << endl;
    }

    ~B() {
        cout << "B Destructor Called!.." << endl;
    }

};


int main() {

    B* objB1 = new B(15);
    B& objRef = *objB1;
    B* objB2 = new B(20);

    A* objA1 =  A::getInstance();
    A* objA2 =  A::getInstance();

    cout << "B: " << objRef.value << endl;
    cout << "B: " << objB2->value << endl;

    cout << "A: " << objA1->aHello() << endl;
    cout << "A: " << objA1 << endl;
    cout << "A: " << objA2 << endl;

    return 0;
}

