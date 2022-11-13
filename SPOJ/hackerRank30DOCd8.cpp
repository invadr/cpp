/*
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. 
You will then be given an unknown number of names to query your phone book for. For each name queried, print the 
associated entry from your phone book on a new line in the form name=phoneNumber; if an entry for name is not found, 
print Not found instead.


*/

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


int main() {
    int x;
    cin >> x;
    map<string, string> all;
    for(int i = 0; i < x; ++i){
        string s, p;
        cin >> s >> p;
        all[s] = p;
    }
    string h;
    while(cin >> h){
        if(all.find(h) == all.end()){
            cout << "Not found" << endl;
        }
        else{
            cout << h << "=" << all.at(h) << endl;
        }
    }
}