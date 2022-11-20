//given input, ID class of ship user is interested in and print it to stdin
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	for(int i=0; i<T; i++)
	{
	    char a;
	    cin >> a;
	    if(a=='B' || a=='b')
	    {
	        cout << "BattleShip\n";
	    }
	    else if(a=='C' || a=='c')
	    {
	        cout << "Cruiser\n";
	    }
	    else if(a=='D' || a=='d')
	    {
	        cout << "Destroyer\n";
	    }
	    else if(a=='F' || a=='f')
	    {
	        cout << "Frigate\n";
	    }
	}
	return 0;
}
