/*
Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are the inputs. A triangle
is valid if the sum of all the three angles is equal to 180 degrees.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0; i<T; i++)
	{
	    int A, B, C;
	    scanf("%d %d %d", &A, &B, &C);
	    if(A+B+C==180)
	    {
	        cout << "YES\n";
	    }
	    else
	    {
	        cout << "NO\n";
	    }
	}
	return 0;
}
