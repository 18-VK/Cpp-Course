#include<iostream>
using namespace std;
int main()

{    int i;
     int a,b;
cout<<"enter a and b"<<endl;
cin>>a>>b;
cout<<"all number btw A and B"<<endl;


for (int num = a; num <=b ; num++)// num will start from a and go to b using this loop
{
    
    for (  i = 2; i <num; i++)// loop will start form i and go to num 
    {
        if (num%i==0)
        {
            break;

        }
        
    }
   
    if (i==num) // prime divide from itself so i==num to check that number divide itself 
    {
        
     cout<<num<<endl;
        
    }
   
    
}
 
return 0;
    
}