/*
 * Cpointers.cpp
 *
 *  Created on: 25-May-2016
 *      Author: shiv
 */
#include <iostream>
#include "Cpointers.h"

//#define MAX 20

using namespace std;

struct EMPLOYEE * Ereg;

Cpointers::Cpointers() {
	cout << "Constructor Called!" << endl;
}

Cpointers::~Cpointers() {
	cout << "Destructor Called!" << endl;
}

void Cpointers::pointers() {
	string bufferS = "Hello, World!...";
	char bufferC[80] = "Hello, World!...";
	char *pbuffer = bufferC;
	while(*pbuffer)
		pbuffer++;
	cout << "Length - Pointer is: " << pbuffer - bufferC << endl;		// 16
	cout << "Length - Array is: " << bufferS.size() << endl;			// 16
	cout << "sizeof char: " << sizeof(char)				// 1
		 << "\nsizeof string: " << sizeof(string)		// 8
		 << "\nsizeof pbuffer: " << sizeof pbuffer		// 8
		 << "\nsizeof bufferC: " << sizeof bufferC		// 80
		 << "\nsizeof bufferS: " << sizeof bufferS		// 8
		 << endl;

}

void Cpointers::pointers() const {
	string bufferS = "Hello, World!...";
	char bufferC[80] = "Hello, World!...";
	char *pbuffer = bufferC;
	while(*pbuffer)
		pbuffer++;
	cout << "Length - Pointer is: " << pbuffer - bufferC << endl;		// 16
	cout << "Length - Array is: " << bufferS.size() << endl;			// 16
	cout << "sizeof char: " << sizeof(char)				// 1
		 << "\nsizeof string: " << sizeof(string)		// 8
		 << "\nsizeof pbuffer: " << sizeof pbuffer		// 8
		 << "\nsizeof bufferC: " << sizeof bufferC		// 80
		 << "\nsizeof bufferS: " << sizeof bufferS		// 8
		 << endl;

}

void Cpointers::dynamicPointer() const {
    int * parr = NULL;
    int size = 10;
    parr = new int(size);

    int i = 65;
    while(i < size) {
        *parr = i;
    }
    cout << parr << endl;
}

void Cpointers::dynamicPointer() {
    int * parr = NULL;
    int size = 10;
    parr = new int[size];

    int i = 65, flag = 0;
    while(flag < size) {
        *parr = i;
        i++;
        flag++;
    }
    cout << (string *)parr << endl;
    cout << (char *)parr << endl;
}

void Cpointers::dynamicData() const{
    int noOfEmployee = 0;
    cout << "Enter no. of Employee" << endl;
    cin >> noOfEmployee;

    Ereg = new EMPLOYEE[noOfEmployee];

    string defaultName = "Emloyee";

    for(int i = 0; i < noOfEmployee; i++) {
        (&Ereg[i])->regno = i + 1;
        (Ereg + i)->name = defaultName;
    }

    for(int i = 0; i < noOfEmployee; i++) {
        cout << (Ereg + i)->regno << "\t"
             << (Ereg + i)->name << endl;
    }

    delete [] Ereg; //segmentation Fault
}

void Cpointers::dynamicData() {
    int noOfEmployee = 0;
    cout << "Enter no. of Employee" << endl;
    cin >> noOfEmployee;

    Ereg = new EMPLOYEE[noOfEmployee];

    string defaultName = "Emloyee";

    for(int i = 0; i < noOfEmployee; i++) {
        (&Ereg[i])->regno = i + 1;
        (Ereg + i)->name = defaultName;
    }

    for(int i = 0; i < noOfEmployee; i++) {
        cout << (Ereg + i)->regno << "\t"
             << (Ereg + i)->name << endl;
    }

    delete [] Ereg; //segmentation Fault
}

void Cpointers::dynamic2DMatrix(const int size) {
    const int n = 9;

    char (*mat)[n] = new char[n][n];

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < i; j++) {
            mat[i][j] = '*';
        }
    }
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < i; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }
}

void Cpointers::stringTest() {
    string name = "Shiv Pratap Singh";
    string nameAppend = "tech arts";
    string para = "This string is going to be really big. \nI gona check the spaces in this string and clear them out.";

    for(char i: name) {
        cout << i << endl;
    }
    cout << name.find("Singh") << endl;
    cout << name.erase(5,7) << endl;
    cout << name.erase(5) << endl;
    cout << name.erase() << endl;
    cout << (name.empty() == 1?"true":"false") << endl;
    cout << name + nameAppend << endl;
    cout << name << endl;
    cout << name.append(nameAppend) << endl;
    cout << name << endl;
    cout << name.size() << endl;

    cout << para << endl;
    for(int i = 0; i < (int)para.size(); i++) {
        int add = para.find(" ");
        if(add >= i && add <= (int)para.size()) {
            para.erase(add,1);
        }
    }
    cout << para << endl;

    string word1 = "Game";
    char word2[] = " Over";
    string phrase = word1 + word2;
    if (word1 != word2) {
    cout << "word1 and word2 are not equal.\n";
    }
    if (phrase.find(word2) != string::npos) {
    cout << "word2 is contained in phrase.\n" << string::npos << endl;
    }
}

