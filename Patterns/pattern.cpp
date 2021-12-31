#include<iostream>
 using namespace std;
 int main()
 {
     int row,col;

     cout<<"enter the number of row you want "<<endl;
     cin>>row;
     cout<<"enter th enumber of column you want "<<endl;
     cin>>col;

     for (int i = 1; i <= row; i++)
     {
     for (int j = 1; j <=col; j++)
         {
            cout<<"*";
         }
         
        cout<<endl;
     }
     
return 0;
 }