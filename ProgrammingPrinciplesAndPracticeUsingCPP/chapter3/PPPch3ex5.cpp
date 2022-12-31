#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a float: ";
    double val1;
    cin >> val1;
    cout << "Enter another float: ";
    double val2;
    cin >> val2;

    if (val1 > val2)
    {
        cout << "val1 is greater.";
    }
    else
    {
        cout << "val2 is greater.";
    }
    cout << "Sum: " << val1 + val2 << '\n';
    cout << "Product: " << val1 * val2 << '\n';
    cout << "Ratio: " << val1 / val2 << '\n';

}