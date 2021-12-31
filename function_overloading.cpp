#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Example 1
// two or more function have same name with different arguments
// int sum(int a,int b) 
// {//   cout<<"using 2 arguments"<<endl;  //b is 9
// //     cout<<a<<b<<endl;
//     return (a+b);
// }
// int sum(int a, int b, int c)
// {
//     //  cout<<"using 3 arguments"<<endl; // now b is 7
//     // cout<<a<<b<<c<<endl;
//     return (a+b+c);
// }
// int main()
// {
//     cout<<"the sum of 3 and 9 is: "<<sum(3,9)<<endl;
//     cout<<"the sum of 3,7 and 9 is : "<<sum(3,7,9)<<endl;
// return 0;
// }

// Example 2
// volume of square
int volume (int side)
{
    return pow(side,3); // cube of a
}

// volume of cylinder
double volume (int r, int h)
{
    return (3.14*r*r*h);
}

// This is not be acceptable bcoz both func have same argument 
// // volume of cone 
// int volume(float r,int height)
// {  
//     return(3.14*r*height);
// }

// volume of rectangular box
float volume(int l, int b, int h)
{
    return (l*b*h);
}
int main()
{
    cout<<"volume of square "<<volume(3)<<endl;
    cout<<"volume of cylinder "<<volume(2,4)<<endl;
    cout<<"volume of rectangular box "<<volume(3.2,4,2)<<endl;
}