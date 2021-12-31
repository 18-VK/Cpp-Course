#include<iostream>
using namespace std;
int fact(int num)
{
    int factorial =1;
    for (int  i = 1; i <=num; i++) // factorial of n = n x n-1 x n-2 x n-3 x n-4 ....... so on
    {
        factorial=factorial*i; // or we can write factorial*=i
    }
    return factorial;
}
int main()
{
    int num;
    cout<<"enter number of which factorial you want"<<endl;
    cin>>num;
    cout<<"factorial of "<<num<<" is "<<endl<<fact(num);
    return 0;
}