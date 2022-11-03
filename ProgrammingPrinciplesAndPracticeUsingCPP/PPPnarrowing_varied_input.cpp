#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    double a = 0;

    while (cin >> a) 
    {
        int i = a;
        char c = i;
        int i2 = c;
        cout << "a==" << a
        << " i==" << i
        << " i2==" << i2
        << " char(" << c << ")\n";
    }

    return 0;
}