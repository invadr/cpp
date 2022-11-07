#include <iostream>
#include <vector>
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "Is your number above or below 50? (a)bove, (b)elow, (n)either";

    //a-above, b-below, n-neither
    char input;
    cin >> input;

    if(input == 'a')
    {
        cout << "Is your number above or below 75? (a)bove, (b)elow, (n)either";
        cin >> input;
        
        if(input == 'a')
        {
            cout << "Is your number above or below 87? (a)bove, (b)elow, (n)either";
            cin >> input;

            if(input == 'a')
            {
                cout << "Is your number above or below 93? (a)bove, (b)elow, (n)either";
                cin >> input;

                if(input == 'a')
                {
                    cout << "Is your number above or below 96? (a)bove, (b)elow, (n)either";
                    cin >> input;

                    if(input == 'a')
                    {
                        cout << "Is yournumber above or below 98? (a)bove, (b)elow, (n)either";
                        cin >> input;

                        //I'm stopping this program at this point because it displays D&C illustrated via conditionals
                        //and filling in 100 couts is not the best use of time on a Sunday.  
                        if(input == 'a')
                        {
                            cout << "Is your number above 99 (y)es (n)o";
                            cin >> input;

                            if(input == 'y')
                            {
                                cout << "Your number is 100.\n";
                            }
                            else 
                            {
                                cout << "Your numebr is 99.\n";
                            }

                        }
                        else if(input == 'b')
                        {
                            cout << "Your number is 97\n";
                        }
                        else
                        {
                            cout << "Your number is 98\n";
                        }
                    }
                }
                else if(input == 'b')
                {
                    cout << "Is your number above 94? (y)es, (n)o";
                    cin >> input;
                    if(input == 'y')
                    {
                        cout << "Your number is 95\n";
                    }
                    else
                    {
                        cout << "Your number is 94\n";
                    }
                }
                else
                {
                    cout << "Your number is 96";
                }
            }
            else if(input == 'b')
            {

            }
            else
            {
                cout << "Your number is 87.\n";
            }
        }
        else if(input == 'b')
        {

        }
        else
        {
            cout << "Your number is 75!\n";
        }
    }
    else if(input == 'b')
    {

    }
    else
    {
        cout << "Your number is 50.\n";
    }
    

    return 0;
}