#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "How many miles did you travel? ";
    double miles;
    cin >> miles;
    double km = miles * 0.621371;
    cout << "In km that is: " << km << '\n';

    return 0;
}