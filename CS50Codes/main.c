#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "cs50.h"

int isOperand(char c) { return (c >= '0' && c <= '9'); }

// utility function to find value of and operand
int value(char c) {  return (c - '0'); }

int toInt(string source, int startIndex, int endIndex) {
    int i = startIndex;
    int number = 0;
    int negative = 0;

    for(i = 0; i != endIndex; i++) {
        if(source[i] >= '0' && source[i] <= '9')
            number = ( number * 10 ) + ( source[i] - '0' );
        else if(source[i] == '-')
            negative = 1;
    }
    if(negative) {
        number = -number;
    }

    return number;

}

int indexOf(string source, char symbol) {
    int pos = 0;
    while(source[pos] != symbol) { pos++; }
    return pos;
}

// This function evaluates simple expressions. It returns -1 if the
// given expression is invalid.
int evaluate(string exp)
{
    // Base Case: Given expression is empty
    if (*exp == '\0')  return -1;

    int len = strlen(exp);

    // The first character must be an operand, find its value
    int res = toInt(exp, 0, 2);

    // Traverse the remaining characters in pairs
    for (int i = 1; exp[i]; i += 2)
    {
        // The next character must be an operator, and
        // next to next an operand
        char opr = exp[i], opd = exp[i+1];

        // If next to next character is not an operand
        if (!isOperand(opd))  return -1;

        // Update result according to the operator
        if (opr == '+')       res += value(opd);
        else if (opr == '-')  res -= value(opd);
        else if (opr == '*')  res *= value(opd);
        else if (opr == '/')  res /= value(opd);

        // If not a valid operator
        else                  return -1;
    }
    return res;
}

int main() {

    string exp = GetString();
    int result = evaluate(exp);

    printf("%d", result);

    return 0;
}
