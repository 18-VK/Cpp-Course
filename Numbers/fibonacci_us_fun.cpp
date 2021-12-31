#include<iostream> 
using namespace std;
void fib(int num)
{
     int first_term=0, sec_term=1,next_term;
     for (int i = 1; i <=num; i++)  // i<=num mean if suppose num or range is 5 then loop run 5 time
     {
        cout<<first_term<<endl;      // when loop run one time first_term=0 , when loop run second time
         next_term=first_term+sec_term; // first_term=1 because first_term=sec_term, when third time
         first_term=sec_term;           // first_term=next_term because sec_term=first_term and so on...
         sec_term=next_term;
     }
     return;
}
int main()
{
    int range;
    int first_term=0, sec_term=1,next_term;
    cout<<"enter range for terms of fibonacci"<<endl;
    cin>>range;
    cout<<"fibonacci series upto "<<range<<" is:"<<endl;
   fib(range);
   return 0;
}


