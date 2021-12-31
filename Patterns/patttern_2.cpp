#include<iostream>
using namespace std;
int main()
{
    int row,col;

     cout<<"enter the number of row you want "<<endl;
     cin>>row;
     cout<<"enter th enumber of column you want "<<endl;
     cin>>col;

     for (int i = 1; i <=row; i++)
     {
         for (int j = 1; j <=col; j++)
         {
            if (i==1||i==row)  // i for row
            {
               cout<<"*";

            }else if (j==1||j==col) // j for colum
            {
               cout<<"*";

            }else
            {
                cout<<" ";// blank space
            }
            
            
            
         }
         cout<<endl;//new line after a row
     }
     
     
     return 0;
     
}