#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void Do(int* i)
{
    cout << i[2] << endl;
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}