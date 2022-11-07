#include <iostream>
#include <vector>
#include <string>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> num_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Give me a digit from 0 to 9 (inclusive) and I will write it in English for you: ";
    int digit;
    cin >> digit;
    cout << num_strings[digit] << endl;

    cout << "Now give me a digit written in English from 0 to 9 (inclusive) and I will write it's Arabic numeral for you: ";
    string text_num;
    cin >> text_num;
    
    int x = 0;
    for(int i = 0; i < num_strings.size(); ++i)
    {

        if (text_num.compare(num_strings[i]) == 0)
        {
            x = i;
        }
    }
    cout << text_num << " expressed numerically: " << nums[x] << endl;


    return 0;
}