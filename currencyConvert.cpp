#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    constexpr double y = .0067;
    constexpr double k = .095;
    constexpr double p = 1.12;

    cout << "Pick Yen (y), Kroner (k), or Pound (p) and we will convert to USD: ";
    char input;
    cin >> input;

    cout << "How many of these do you have? ";
    int amount;
    cin >> amount;

    if(input == 'y') cout << "In USD: " << y * amount << endl; 
    else if(input == 'k') cout << "In USD: " << k * amount << endl;
    else if(input == 'p') cout << "In USD: " << p * amount << endl;
    else cout << "This is not a denomination with which I work." << endl;

    //switch version 
    switch(input)
    {
        case 'y': cout << "In USD: " << y * amount << endl;
                 break;
        case 'k': cout << "In USD: " << k * amount << endl;
                 break;
        case 'p': cout << "In USD: " << p * amount << endl;
                 break;
        default: cout << "This is not a denomination with which I work." << endl;
                 break;
    }
}