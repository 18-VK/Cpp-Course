#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    float sum=0;
    float avg;
    for (int i = 0; i <size; i++)
    {
        cout<<"The num is ";
        cin>>arr[i];
        
        sum+=arr[i];
    }
    avg=sum/size; // sum/ total no of elements
    cout<<"the sum is "<<sum<<endl;
    cout<<"the average is "<<avg<<endl;

}