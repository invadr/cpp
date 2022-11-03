#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "How many pennies do you have? ";
    int pennies;
    cin >> pennies;

    cout << "How many nickels do you have? ";
    int nickels;
    cin >> nickels;

    cout << "How many dimes do you have? ";
    int dimes;
    cin >> dimes;

    cout << "How many quarters do you have? ";
    int quarters;
    cin >> quarters;

    cout << "How many half-dollars do you have? ";
    int halfDollars;
    cin >> halfDollars;

    cout << "How many silver-dollars do you have? ";
    int silverDollars;
    cin >> silverDollars;

    double totalPennies = pennies * .01;
    double totalNickels = nickels * .05;
    double totalDimes = dimes * .1;
    double totalQuarters = quarters * .25;
    double totalHalf = halfDollars * .5;
    double totalSilver = silverDollars * 1;

    double moneyTotal = totalPennies + totalNickels + totalDimes + totalQuarters + totalHalf + totalSilver;

    cout << "You have $" << moneyTotal << " in change!\n";
    
}