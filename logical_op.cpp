#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if (num%2==0 && num%3==0)
    {
        cout<<"the number is divisible by both 2 and 3  "<<endl;

    }else if (num%2==0)
    {
        cout<<"the number is divisible by 2"<<endl;

    }else if (num%3==0)
    {
        
        cout<<"the number is divisible by 3"<<endl;

    }else
    {
        cout<<"divisible by none"<<endl;

    }
    
    
    
    
}