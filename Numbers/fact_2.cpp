#include<iostream>
using namespace std;
int fact(int num)
{
    int factorial =1;
    for (int  i = 1; i <=num; i++) // ncr from binomial theorem , ncr=fact(n) / (fact(n-r)*fact(r))
    {
        factorial=factorial*i; 
    }
    return factorial;
}
int main()
{
    int n,r;
    cout<<"enter n and r"<<endl;
    cin>>n>>r;
    cout<<"ncr of n and r"<<endl;
    cout<<fact(n)/(fact(n-r)*fact(r));
return 0;

}