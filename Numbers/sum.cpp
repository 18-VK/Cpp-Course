#include<iostream>
using  namespace std;
// sum of first n odd number
int main()
{
    int n1;
    int sum=0,i=1;
    cin>>n1;

   /* do
    {
        sum+=i;
        i+=2; // every time after the loop i increment by 2 if 1 then after loop become 3 , 3 t0 5...so on
    } while (i<=n1); */

    // method 2
    for (int  i = 1; i <=n1; i++)
    {
       if (i%2!=0)
       {
          sum+=i;
       }
       
    }
    
    cout<<"sum of odd"<<n1<<" "<<sum<<endl;
    return 0;
}