#include<iostream>
#include<cmath>
using namespace std;

bool prime(int num) // some fault in program
{
    for (int i = 2; i<=sqrt(num); i++) // loop for check prime 
    {
        if (num%i==0)
        {
            return false;

        }
        return true;
    }
}
int main()
{
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;

for (int num = a; num <=b; num++)
{
    if (prime(num))
    {
     cout<<num<<endl;  
    }
    
}
return 0;
}