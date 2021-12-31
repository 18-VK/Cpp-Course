#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num)  //prime
{
    for (int i = 2; i <num; i++)
    {
    if (num%i==0)
    {
        return false;
    }
    
    }
return true;
}
bool non_prime(int num)
{
    for (int i = 2; i <num; i++)
    {
        if (num%i==0)        // non-prime
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
int x,y;
cout<<"enter range x to y"<<endl;
cin>>x>>y;
cout<<"all prime number between x and y is:"<<endl;
for (int i = x; i <=y; i++)
{
    if (prime(i))
    {
     cout<<i<<endl;   
    }
}
cout<<"all non-prime between x and y"<<endl;
for (int i = x; i <=y; i++)
{
    if (non_prime(i))
    {
        cout<<i<<endl;
    }
    
}

return 0;

}