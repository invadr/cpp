#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    for(int i = 0; i <= 26; ++i)
    {
        cout << char('a'+i) << "\t" << 97+i << endl;
    }

    return 0;
}