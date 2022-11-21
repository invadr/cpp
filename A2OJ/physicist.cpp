#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n = 0, x = 0, y = 0, z = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }

    if(x == 0 && y == 0 && z == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
