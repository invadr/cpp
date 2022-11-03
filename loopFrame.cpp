#include <iostream>
#include <string>
//this is just a really inefficient way to do this but I wanted practice on string::size_type to 
//build up structures with data not known until runtime

using namespace std;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "!";
    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << endl;

    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;

        while (c != cols)
        {
            if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (r == 0 || r == rows - 1 || r == 0 || c == cols - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}