#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "The number " << num << " is even\n";
    }
    else
    {
        cout << "The number " << num << " is odd\n";
    }
}