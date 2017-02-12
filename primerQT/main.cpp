/*
 * Shiv Pratap Singh
 * QTCreator
 * Ubuntu 15.04
 * Testing Application with several Functions
*/

#include <iostream>
#include "primerQT.hpp"
#include "childClass.hpp"

using namespace std;

int main()
{
    //wide character

    wchar_t wch = L'@';

    cout<<"Hello, World!...\n"
        << static_cast<int>(wch) /*using static cast*/
        << "\nSize of wchar\n"
        << sizeof(wchar_t)  /*checking size of wcahr_t*/
        <<endl;

    primerQT * obj = new primerQT(); // Creating a object pointer of class primerQT
    obj->testElse(obj); //Calling testElse() by passing object pointer to it

    childClass * child = new childClass();
    child->testElse(child);

    delete child;
    delete obj;
    return 0;

}
