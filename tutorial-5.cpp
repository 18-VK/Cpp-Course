#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;

   /* bool flag=0;  //boolean flag    
 for (int i  = 2; i <num; i++) // prime number
 {
    if (num%i==0)
    {
        cout<<"non-prime";
       flag=1; // if loop hit flag =1 that's mean, loop  run without getting break; 
       break;
    }
    
 }
 if (flag==0)
 {
     cout<<"prime";
 }*/


int lastdigit;
    int reverse =0;
while (num>0)
{
  lastdigit=num%10;

  reverse=reverse*10+lastdigit;
  num=num/10;

}
cout<<reverse<<endl;
 
 
return 0;
}