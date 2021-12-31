#include<iostream>
using namespace std;
int main()
{ // find out entered number is prime or non -prime
    int n,i;
    cout<<"enter n value"<<endl;
    cin>>n;
    for ( i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            cout<<"non-prime"<<endl;
            break;
        }
     
    }
    cout<<"prime";
    
    return 0;
    
    
}