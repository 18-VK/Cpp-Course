#include<iostream>
using namespace std;
// Question 1:- check a word is palindrome or not
// algo - check alphabate first and last and second and second last and so on...
/*int main()
{
    int n;
    cout<<"enter the size of char array"<<endl;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=true;
    
   for (int i = 0; i <n; i++)
   {
      if (a[i] !=a[n-1-i]) // n-1 means last element 
      {
          check=false;
          break;
      }
   }
   
    if (check==true)
    cout<<"word is palindrome"<<endl;
    else 
    cout<<"word is note palindrome";

}*/

// Question 2:- find size of longest word in sentence
// some error in code
/*int main()
{
    int n;
    cout<<" enter the size of sentence"<<endl;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int curr_len=0;
    int max_len=0;
    while (i<n)
    {
        if (a[i]== ' '||a[i]=='\0')
        {
          if (curr_len>max_len)
          {
              max_len=curr_len;
          }
          curr_len=0;
        }
        else
        {
           curr_len++;
        }
        if (a[i]=='\0')
        {
            break;
        }
        
        i++;
    }
cout<<max_len;   
}*/


