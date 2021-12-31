#include<bits/stdc++.h>
using namespace std;
// Question 1:- check array is sorted or not 
/*bool sorted(int arr[],int n)
{
    if(n==1) // if array having size 1
    {
        return true;
    }
   bool rest_array= sorted(arr+1,n-1);

  if (arr[0]<arr[1] && rest_array== true )
  {
    return true;
  }
}
int main()
{
int arr[]={1,2,3,4,5};
cout<<sorted(arr,5)<<endl;
return 0;
}*/

// Question 2 :- ascending and descending 

// in decreasing we will print num the call
/*void dec(int num)
{
  if(num==1)
  {
    cout<<"1"<<endl;
    return;
  }
cout<<num<<endl;
dec(num-1);
}
// in this we will call function then print
void asce(int num)
{
  if(num==1)
  {
    cout<<"1"<<endl;
    return  ;
  }
asce(num-1);
cout<<num<<endl;
}
int main()
{
  int num;
  cin>>num;
  dec(num);
  asce(num);

}*/
// Question 3 first and last occurence of array

int firstocc(int arr[],int size,int i,int key)
{
  if (i==size) // base condition
  {
    return -1; // first no element found
  }

  if(arr[i]==key)
  {
    return i;
  }
return firstocc(arr,size,i+1,key); // index
}
int last(int arr[],int size,int i,int key)
{
  if(i==size)
  {
    return -1; // means not found
  }
  // firstly we will check all the element and while releasing we will return 
  int restArray= last(arr,size,i+1,key); // return index of found key
  if(restArray !=-1) // if true mean element found
  {
    return restArray; // index just like firstocc 
  }
  // they will traversed at the end if element in middle found or not
  // last tak jayega agar beech mai key milti hai toh vo return nhi karega vo last occ. tak wair karega phir return karega
  // isseliye return i baad mai hai
if(arr[i]==key)
{
  return i;
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
cout<<"enter key"<<endl;
cin>>key;
int i=0; // for store index of number which have to find
cout<<"first occurence of key which you want to find :"<<firstocc(arr,size,i,key)<<endl;
cout<<"last occurence  of key which you want to find :"<<last(arr,size,i,key)<<endl;
}