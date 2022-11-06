#include <iostream>
#include <vector>
#include "std_lib_facilities.h"

int main()
{
    vector<string> words(10);
    vector<string> bleeps = {"taxes", "auburn", "bored"};
    int checker = 0;

    for(string x; cin >> x;)
    {
        words.push_back(x);
    }

    for(int i = 0; i < words.size(); i++)
    {
        for(int j = 0; j < bleeps.size(); j++)
        {
            if(words[i] == bleeps[j])
            {
                checker = 1;
            }        
        }
        if(checker == 1)
        {
            cout << "BLEEP!" << endl;
            checker = 0;
        }
        else
        {
            cout << words[i] << endl;
        }
    }
}