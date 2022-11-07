#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "Enter the operation we are performing today: ";
    char op;
    cin >> op;

    cout << "What is your first operand? ";
    double a;
    cin >> a;

    cout << "And the second? ";
    double b;
    cin >> b;

    switch(op)
    {
        case '+': cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-': cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*': cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/': cout << a << " / " << b << " = " << a / b << endl;
            break;
        default: cout << "I don't know what's going on here!!!\n";
            break;
    }

    return 0;
}