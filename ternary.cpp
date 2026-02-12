#include<iostream>
using namespace std;
int main() {
bool isAdult;
int age;
cout<<"Enter your age :-";
cin>>age;

if(age>=18)
{ cout<<"you are an adult";}
else 
{ cout<<"you are not an adult";}

isAdult = (age>=18)? true : false ;



    return 0 ;
}