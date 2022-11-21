//Relational Operators are operators which check relationship between two values. Given two numerical
//values A and B you need to help chef in finding the relationship between them that is,
//First one is greater than second or, First one is less than second or, First and second one are equal.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0; i<T; i++)
	{
	    int A, B;
	    scanf("%d %d", &A, &B);
	    if(A>B)
	    {
	        cout << ">\n";
	    }
	    else if(A<B)
	    {
	        cout << "<\n";
	    }
	    else if(A==B)
	    {
	        cout << "=\n";
	    }
	}
	return 0;
}
