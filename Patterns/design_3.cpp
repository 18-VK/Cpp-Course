#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int i,j; // as matrix aij=i for row j for column ,a11=aij,    a12=aij (i=1,j=2)
for (int i = 1; i <=num; i++)
{
    for (int j = 1; j <= i; j++)
    {
        if ((i+j)%2==0)
        {
            cout<<" 1 ";

        }else
        {
            cout<<" 0 ";
        }
        
    }
    cout<<endl;
}
return 0;
}