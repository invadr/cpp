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

    //applying input directly into the loop
    //and combining with operations on the vector
     vector<double> temps;

     for (double temp; cin >> temp;)
     {
        if(temp == 999)
        {
            break;
        }
        temps.push_back(temp);
     }

     for(double x: temps)
     {
        cout << x << endl;
     }

     double sum = 0;
     for(double x: temps) sum+= x;
     cout << "Average temp: " << sum/temps.size() << endl;

     sort(temps);
     cout << "Median temperature: " << temps[temps.size()/2] << endl;

    return 0;
}