#include<iostream>
using namespace std ; 
int main() {
int n = 16 ;
for (int i = 1; i <=n; i++)
{
    /* code */cout<<"* ";

    for (int j = 1; j<=n-1; j++)
    {
        /* code */if (i == 1 || i == n)
        {
            /* code */
            cout<<"* "; } 
            else
            { 
                cout<<"  "; 
            }
        }
        
    
    







  cout<<"*"<<endl; //LAST line of star
}

    return 0 ; 
}