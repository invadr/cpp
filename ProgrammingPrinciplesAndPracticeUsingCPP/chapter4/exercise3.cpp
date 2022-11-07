#include <iostream>
#include <vector>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "How many elements will the vector have?";
    int input;
    cin >> input;

    vector<double> distances(input);

    for(int i = 0; i < distances.size(); i++)
    {
        double x;
        cin >> x;
        distances.push_back(x);
    }

    double smallest = 999999.99;
    double longest = 0.0;

    for(int i = 0; i < distances.size(); i++)
    {
        if((distances[i+1] - distances[i]) < smallest)
        {
            smallest = distances[i+1] - distances[i];
        }
        if((distances[i+1] - distances[i]) > longest)
        {
            longest = distances[i+1] - distances[i];
        }
    }

    cout << "Longest Distance: " << longest << endl;
    cout << "Shortest Distance: " << smallest << endl;


    return 0;
}