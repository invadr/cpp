#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int square(int x)
{
    return x * x;
}

int main()
{
    cout << "What number should we square? ";
    int a;
    cin >> a;    

    cout << square(a) << endl;

    return 0;
}