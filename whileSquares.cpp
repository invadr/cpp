#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int i = 1;
    while (i <= 100)
    {
        cout << i << "\t" << i * i << endl;
        ++i;
    }
}