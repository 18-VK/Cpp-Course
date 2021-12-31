#include<iostream>
 using namespace std;
 // Selection sort 
 /*int main()
 {
     int size;
     cout<<"enter the size of array"<<endl;
     cin>>size;
     int arr[size];
     for (int i = 0; i <size; i++)
     {
         cin>>arr[i];
     }
     // we always want j index  one step more than i (j=i+1) 

 for (int i = 0; i <size-1; i++)   // from index0 to second last index
     {
      for (int j = i+1; j <size; j++) // from second element to last element/ last index
      {
         if (arr[i]>arr[j])
         {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            
         }
         
      }
       
    }
    cout<<"sorted array "<<endl;
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }
 }*/

 // Bubble sort
 /*int main()
 {
     int size;
   cout<<"enter the size of array"<<endl;
     cin>>size;
     int arr[size];
     for (int i = 0; i <size; i++)
     {
         cin>>arr[i];
     }*/

     /*int counter=0;
     while (counter<size-1) // for passing array
     {
        for (int i = 0; i <size-counter-1; i++) // for comparison
        {
            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        counter++;
     }*/
     // method 2 
     /*for (int i = 0; i <size; i++)
     {
         for (int j = 0; j <size-i; j++)
         {
            if (arr[j]>arr[j+1])
            {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
            
         }
         
     }
        cout<<"sorted array"<<endl;
        for (int i = 0; i <size; i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;*/
// }

// insertion sort

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

     for (int i = 1; i <size; i++)
     {
         int curr_element=arr[i];
         int  j=i-1;
         while (arr[j]>curr_element && j>=0)
         {
          arr[j+1]=arr[j];
            
           j--; // compare from current number to index 0
         }
         arr[j+1]=curr_element;
     }
     cout<<"sorted array :"<<endl;
     for (int i = 0; i <size; i++)
     {
         cout<<arr[i]<<" ";
     }
 return 0;    
}