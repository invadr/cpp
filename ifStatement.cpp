#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int a, b;
    cout << "Enter a couple numbers: ";
    cin >> a >> b;

    if (a < b)
    {
        cout << b << " is greater\n";
    }
    else if (a > b)
    {
        cout << a << " is greater\n";
    }
    else
    {
        cout << "The entered numbers are equal\n";
    }
}