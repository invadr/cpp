#include <iostream>
#include "std_lib_facilities.h"

int main() 
{
    int numberOfWords = 0;
    string previous = "";
    string current;
    while (cin >> current)
    {
        ++numberOfWords;
        if (previous == current)
            cout << "word number " << numberOfWords
            << " repeated: " << current << '\n';
        previous = current;
    }

    return 0;
}