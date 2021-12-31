#include<iostream>
using namespace std;
int sum(int x,int y)
{
 int sum=0;
sum=x+y;
return sum;
}
int sub(int x,int y)
{
    int sub;
    sub=x-y;
    return sub;
}
bool op(int x, int y)
{
    
    if ( x >  y)
    {
        return true;
    }
    else
    {
        return false;
    }
    return op;
}
int main()
{
    int x,y;
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
cout<<"sum is :"<<sum(x,y)<<endl;
cout<<"Difference is :"<<sub(x,y)<<endl;
cout<<op(x,y);
}