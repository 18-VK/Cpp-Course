#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Qestion 1 max till i in array

/*int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    
    }
    int max_ele= INT_MIN;
    for (int i = 0; i < size; i++)
    {
        max_ele=max(max_ele,arr[i]);
        cout<<max_ele<<" ";
    }  
}*/

//question 2  print all subarrays  and sum of all subarray
/*int main()
{
    int size;
    cout<<" enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<" arrays are:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
int sum=0;
// printing subarrays logic
cout<<"All subarrays are:"<<endl;
for (int start = 0; start < size; start++) //for fixing start point or passing  array
{
    for (int end = start; end < size; end++) //loop from start point to end element of array for each interation of i
    {
       for (int k = start; k <=end; k++)
       {
           
           sum+=arr[k];// SUM OF SUBARRAY
           cout<<arr[k];

       }
       cout<<endl;
       
    }
    cout<<endl;
}

cout<<"sum of all subarray: "<<sum;
return 0;
}*/

// Question 3 sum of each array
/*int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    int curr=0;
  
    for (int i = 0; i < size; i++)
    {
      cin>>arr[i];
    }
      cout<<"sum of each subarrays are: "<<endl;
    for (int start = 0; start <size; start++)
    {
        for (int end =start;  end<size; end++)
        {
            curr +=arr[end];
           cout<<curr<<endl;
        }   
    }
    return 0;
}*/

// Question 4 print length of longest arithmatic subarray

/*int main()
{
    int size;
    cout<<"enter the  size of array"<<endl;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
    cin>>a[i];
    }
    // logic
    int ans=2; // assume smallest length of arithmetic array
    int prev_dif=a[1]-a[0];
    int curr=2; // current length of array
    int j=2; // initialize for while loop
    while(j<size)
    {
        if(prev_dif==a[j]-a[j-1])
        {
            curr++;
        }else
        {
            prev_dif=a[j]-a[j-1];
            curr=2;

        }
        ans=max(ans,curr);
    j++;   
    }
    cout<<"the longest arithmatic subarray is:"<<ans;
}*/
