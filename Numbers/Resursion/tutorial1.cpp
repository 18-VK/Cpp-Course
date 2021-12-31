#include<iostream>
#include<cmath>

using namespace std;
// Question 1: sum of natural number till n using recursion
/*int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prev=sum(n-1);
    return n+prev;
}
int main()
{
   cout<<sum(4)<<endl;
}*/
// question 2 : calculate the power of p 
/*int power(int n ,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*pow(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;

    cout<<power(n,p)<<endl;
}*/

//Question 3: find the factorial using recursion
/*int fact(int n)
{
    if(n==0|| n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}*/

// question 4:- print nth element  of fibonacci series
/*int fib(int n)
{
    if(n==1|| n==0)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);

}
int main()
{
    int n;
    cout<<"enter postion of element "<<endl;
    cin>>n;
    cout<<fib(n)<<endl;
}*/
