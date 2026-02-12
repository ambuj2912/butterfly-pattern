#include<iostream>
using namespace std ;
int main() {
int a ;
int b ;
char op;
cout<<"Enter the first number :-";
cin>>a;
cout<<"Enter the second number :-";
cin>>b;
cout<<"Enter the operator :-";
cin>>op;
if(op=='+'){
    cout<<"The sum is :-"<<a+b;
}
else if(op=='-'){
    cout<<"The difference is :-"<<a-b;}
else if(op=='*'){
    cout<<"The product is :-"<<a*b;
}
else if(op =='/'){
    cout<<"the quotient is :-"<<a/b;
}

else {
    cout<<"INVALID NUMBER OR OPERATOR";
}





    return 0 ; 
}