#include <iostream>
#include "std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the recipient: ";
    string recipient;
    cin >> recipient;
    cout << "Mutual friend's name: ";
    string friendName;
    cin >> friendName;
    char friendGender = 0;
    cout << "Friend's Gender? ";
    cin >> friendGender;
    int friendAge = 0;
    cout << "Friend's age? ";
    cin >> friendAge;
    if (friendAge < 0 || friendAge > 100) simple_error("you're kidding!");
    cout << "Enter your first name: ";
    string sender;
    cin >> sender;

    cout << "Dear " << recipient << ",\n";
    cout << "This is my first letter to you in a while.\n";
    cout << "I hear you just had a birthday and you are " << friendAge << " years old now!\n";
    if (friendAge < 12) cout << "Next year you will be " << friendAge + 1 << " years old!\n";
    else if (friendAge == 17) cout << "Next year you'll be able to vote!\n";
    else if (friendAge > 70) cout << "I hope you are enjoying retirement!\n";
    cout << "Drill 1 for chapter 3 told me I had to write.\n";
    cout << "Also, have you seen " << friendName << " at all lately?\n";
    if (friendGender == 'm') cout << "Please ask him to call me if you do see him.\n";
    else cout << "Please ask her to call me if you do see her.\n";
    cout << "Well, I hope you are doing well. Talk again soon!\n";
    cout << "\n";
    cout << "Best,\n";
    cout << sender;

    return 0;
}