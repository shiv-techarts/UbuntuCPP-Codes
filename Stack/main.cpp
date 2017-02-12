//RPN Postfix notation calculator
#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

bool isOperator(const string& input);
void performOp(const string& input, stack<double>& stackRef);


int main() {

    cout << "Welcome to the RPN Calculator" << endl;

    stack<double> calcStack;

    string input;

    while(true) {
        //display prompt
        cout << ">>";

        //get user input
        cin >> input;

        //check for numeric
        double num;
        if(istringstream(input) >> num) {
            calcStack.push(num);
        }

        //check for operator
        else if(isOperator(input)) {
            performOp(input, calcStack);
        }

        //check for quit
        else if(input == "q") {
            return 0;
        }

        //invalid output
        else {
            cout << "Invalid input" << endl;
        }

    }


    return 0;
}

bool isOperator(const string& input) {
    string ops[] = {"-", "+", "*", "/"};

    for(int i = 0 ; i < 4; i++) {
        if(input == ops[i])
            return true;
    }

    return false;
}

void performOp(const string& input, stack<double>& stackRef) {

    double lVal, rVal, result;

    rVal = stackRef.top();
    stackRef.pop();

    lVal = stackRef.top();
    stackRef.pop();

    if(input == "-") {
        result = lVal - rVal;
    }
    else if(input == "+") {
        result = lVal + rVal;
    }
    else if(input == "*") {
        result = lVal * rVal;
    }
    else {
        result = lVal / rVal;
    }

    cout << result << endl;
    stackRef.push(result);

}
