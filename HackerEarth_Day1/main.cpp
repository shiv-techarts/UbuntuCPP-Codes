#include <iostream>
#include "mystring.h"

int main() {
    MyString::MyString* objP = new MyString::MyString();
    //char ch1[] = "Great String";
    char ch2[] = "This is a great String I have ever seen. ssss";
    //std::cout << ch1 << " " << ch2 << std::endl;
    //objP->strcpy(ch1,ch2);
    //std::cout << ch1 << " " << ch2 << std::endl;

    //objP->charReplace(ch1,3,'x');
    //std::cout << ch1 << std::endl;

    std::cout << objP->charOccur(ch2,'s') << std::endl;

    return 0;
}
