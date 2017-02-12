#include "mystring.h"
#include <iostream>

void MyString::MyString::strcpy(char *s1, char *s2) {
    int lengthS1 = MyString::strlen(s1);
    int lengthS2 = MyString::strlen(s2);
    if( lengthS1 <= lengthS2 ){
        int i = 0;
        for(; s1[i] != '\0'; i++) {
            s2[i] = s1[i];
        }
        s2[i] = '\0';
    } else {
        std::cout << "Can't copy!.. String does not have enough space" << std::endl;
    }
}

int MyString::MyString::strlen(const char *s) {
    int length = 0;
    for(; *s != '\0'; s++) {
        length++;
    }
    return length;
}

void MyString::MyString::charReplace(char *s, int pos, char replace) {
    for(int i = 0; s[i] != '\0'; i++) {
        if(i == pos)
        s[i] = replace;
    }
}

int MyString::MyString::charOccur(char *s, char ch) {
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ch) {
            count++;
        }
    }
    return count;
}
