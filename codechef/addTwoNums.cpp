//The task is very simple: given two integers A and B, write a program to add these two numbers and output it.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int a,b;
   while(t--){
    int sum=0;
    cin>>a>>b;
    sum=a+b;
    cout<<sum<<"\n";
   }
   return 0;
}
