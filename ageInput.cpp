#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your first name and age: ";
    string name = "";
    double age = 0.0;

    cin >> name >> age;
    cout << "Hello, " << name << ".  You are " << age << " years old.";

    return 0;
}