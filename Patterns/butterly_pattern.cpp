#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
for (int i = 1; i <=num ; i++)
{
    int empty_space =2*num-2*i;

    for (int j = 1; j <=i; j++)
    {
        cout<<" * ";
    }
        for (int j = 1; j <=empty_space; j++)
{
    cout<<"   ";
}
for (int j = 1; j <=i; j++)
{
   cout<<" * ";
}

cout<<endl;
}

for (int i = num; i >=1; i--)
{
     int empty_space =2*num-2*i;
    for (int j = 1; j<=i; j++)
    {
        cout<<" * ";
    }
    
    
    for (int j = 1; j <=empty_space; j++)
{
    cout<<"   ";
}
for (int j = 1; j <=i; j++)
{
    cout<<" * ";
}

cout<<endl;

}
return 0;
}