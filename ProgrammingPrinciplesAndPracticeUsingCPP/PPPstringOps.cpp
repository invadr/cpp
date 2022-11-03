#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first and last name\n";
    string first;
    string last;


    cin >> first >> last;
    if (first == last) cout << "That's the same name twice\n";
    if (first < last)
        cout << first << " is alphabetically before " << last << '\n';
    if (first > last)
        cout << first << " is alphabetically after " << last << '\n';

    return 0;
}