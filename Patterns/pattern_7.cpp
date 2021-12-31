#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter row"<<endl;
    cin>>n;
int space;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            cout<<"*";
            
        }
        int space=2*n-2*i;
        for ( int j = 1; j < space; j++)
        {
            cout<<"  ";
        }
        
        cout<<endl;
    }
}