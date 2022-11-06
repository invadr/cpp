#include <iostream>
#include <vector>
#include "std_lib_facilities.h"

int main()
{
    vector<string> words;

    for(string temp; cin>>temp;)
    {
        if(temp == "")
        {
            break;
        }
        words.push_back(temp);
    }
    cout << "Number of words: " << words.size() << '\n';

    sort(words);

    for(int i = 0; i < words.size(); ++i)
        if(i == 0 || words[i - 1] != words[i])
            cout << words[i] << "\n";

    return 0;
}