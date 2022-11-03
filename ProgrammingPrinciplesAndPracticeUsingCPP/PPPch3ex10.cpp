#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "operation? ";
    string operation;
    cin >> operation;
    cout << "Operand 1: ";
    int op1;
    cin >> op1;
    cout << "Operand 2: ";
    int op2;
    cin >> op2;

    if(operation == "+") cout << op1 + op2;
    else if(operation == "-") cout << op1 - op2;
    else if(operation == "*") cout << op1 * op2;
    else if(operation == "/") cout << op1 / op2;
    else if(operation == "%") cout << op1 % op2;
    else cout << "Not an operation I know!";
}