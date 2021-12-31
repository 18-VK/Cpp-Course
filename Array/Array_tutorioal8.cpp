#include<iostream>
using namespace std;
int main()
{
    //int array[3];//declaration of array
    //initialization method 1
   /* array[0]=10;
    array[1]=60;  
    array[1]=50;      
    // initialization and declaration method 2
int array[3] ={10,60,50};
cout<<array[2]; // means 50 (becoz index start from [0] and go to [sizeof_arr -1])
return 0;*/

// input array by user
int size;
cin>>size; // size of array
int array[size];
for (int i = 0; i <=size; i++)
{
    cin>>array[i]; // initialize array value which give by user 
}
cout<<"array[0] is "<<array[0]<<endl;
cout<<"array[1] is "<<array[2]; // try to display array[2] which entered by user
return 0;
}
