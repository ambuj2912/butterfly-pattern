#include<iostream>
using namespace std ; 
int main() { 
double science ;
double maths ;
double bio ;
double sum ; 

cout<<"Enter you science marks here  :-";
cin>>science;
cout<<"Enter you maths marks here :-";
cin>>maths;
cout<<"Enter your bio marks here :-";
cin>>bio;

sum = (science + maths + bio) / 3 ;
cout<<"avg of result is "<<sum;
return 0 ; } 