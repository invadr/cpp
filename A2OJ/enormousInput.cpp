/*
The purpose of this problem is to verify whether the method you are using to read
input data is sufficiently fast to handle problems branded with the enormous
Input/Output warning. You are expected to be able to process at least 2.5MB of input
data per second at runtime.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
