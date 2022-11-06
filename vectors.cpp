#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<int> newVec = {1, 2, 3, 4, 5, 6};
    vector<string> words = {"Movie Guy", "Top Force Aeroplanes", "Comedic Attempt"};
     cout << words[1] << endl;
     words.push_back("Big Time Potato Chops");
     cout << words[3] << endl;

    //range based for loop in cpp that provides a succinct way to traverse list-based data structures
    //like vectors here.
     for(int b: newVec)
     {
        cout << b << endl;
     }

    return 0;
}