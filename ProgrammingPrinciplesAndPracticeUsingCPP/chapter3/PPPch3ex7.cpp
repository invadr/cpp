#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a word: ";
    string val1;
    cin >> val1;

    cout << "Enter a second word: ";
    string val2;
    cin >> val2;

    cout << "Enter a third word: ";
    string val3;
    cin >> val3;

    if (val1 >= val2 && val1 >= val3)
    {
        if(val2 >= val3)
        {
            cout << val3 << ", " << val2 << ", " << val1 << '\n';
        }
        else
        {
            cout << val2 << ", " << val3 << ", " << val1 << '\n';
        }
    }
    else if (val2 >= val1 && val2 >= val3)
    {
        if (val1 >= val3)
        {
            cout << val3 << ", " << val1 << ", " << val2 << '\n';
        }
        else
        {
            cout << val1 << ", " << val3 << ", " << val2 << '\n';
        }
    }
    else if (val3 >= val1 && val3 >= val2)
    {
        if (val1 >= val2)
        {
            cout << val2 << ", " << val1 << ", " << val3 << '\n';
        }
        else 
        {
            cout << val1 << ", " << val2 << ", " << val3 << '\n';
        }
    }
}