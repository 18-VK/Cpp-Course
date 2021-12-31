#include<iostream>
#include<climits>
using namespace std;
// Question 1find max and min value of array enter by user
int main()
{
int size;
cout<<"enter size of array "<<endl;
cin>>size;

int arr[size];
for (int i = 0; i <=size; i++)
{
    cin>>arr[i];
}
int max_no=INT_MIN; // INT_MIN means smallest value present in c++
int min_no=INT_MAX;// INT_MAX means greatest value present in c++
for (int  i = 0; i <=size; i++) // this loop will check every array  
{
   max_no=max(max_no,arr[i]); // check max btw previous max value and array 
   min_no=min(min_no,arr[i]);// check min btw previous min value and array
}

cout<<"maximum value of array is"<<max_no<<endl;
cout<<"minimum value of array is"<<min_no<<endl;
return 0;
}
// practice Question 
