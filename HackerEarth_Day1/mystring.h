#ifndef MYSTRING_H
#define MYSTRING_H

namespace MyString {

    class MyString {
    public:
        //MyString();
        void strcpy(char *s1, char* s2);
        int strlen(const char* s);
        void charReplace(char* s, int pos, char replace);
        int charOccur(char* s, char ch);
    };
}

#endif // MYSTRING_H
