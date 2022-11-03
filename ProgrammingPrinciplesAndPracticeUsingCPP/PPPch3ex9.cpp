#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter a number from 1 to 4 and I will spell it! ";
    int num;
    cin >> num;

    if (num < 1 || num > 4)
    {
        cout << "Not a number I know!\n";
    }

    if(num ==1) cout << "one";
    else if(num == 2) cout << "two";
    else if(num == 3) cout << "three";
    else if(num == 4) cout << "four";
}