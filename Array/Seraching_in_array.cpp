#include<iostream>
using namespace std;
// linear search
/*int linear_search(int arr[],int size,int key)
{
    for (int i = 0; i <size; i++)
    {
        if (arr[i] ==key)
        {
            return i;
        }
        
    }
    return 0;// condition is not true
}
int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter key which you want to search"<<endl;
    cin>>key;
    cout<<"index of array there key "<<key<<" is"<<" placed at "<<linear_search(arr,size,key);

}*/

// binary serach
int binary_search(int arr[],int size, int key)
{
    int start=0;
    int end=size;
while (start<=end) // loop from start to end
{
   int mid= start+end/2; // or mid = size of array/2
   if (arr[mid]==key)
   {
       return mid;
   }
   else if (arr[mid]>key)
   {
      end=mid-1;
   } 
   else // if arr[mid]<key
   {
       start=mid+1;
   }

}
return -1;
}

int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"enter the element you want to search"<<endl;
    cin>>key;
cout<<"The element "<<key<<" is present at index "<<binary_search(arr,size,key)<<endl;
return 0;
}
