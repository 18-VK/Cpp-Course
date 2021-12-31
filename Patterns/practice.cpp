#include<iostream>
using namespace std;
int main()
{
/*int row,col;
cin>>row>>col;*/

/*for (int i = 1; i <=row; i++)// rectangle
{
    for (int j = 1; j <=col; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
}*/
/*for (int i = 1; i <=row; i++)
{
    for(int j=1;j<=col;j++)
    {
    if (i==1||i==row || j==1||j==col)   //hollow rectangle
    {
        cout<<"*";
    }
    else
    {
        cout<<" ";
    }
    
    
   
    
    }
    cout<<endl;
}*/
int num;
cin>>num;
/*for (int i = 1; i <= num; i++)
{
    for (int j= 1; j <= i; j++)  //half pyramid
    {
        cout<<"*";
    }
    cout<<endl;
}*/

/*for (int i = num; i >=1; i--)
{
    for (int j= 1; j <= i; j++) //half pyramid inverted
    {
        cout<<"*";
    }
    cout<<endl;
}*/

/*for (int i = 1; i <= num; i++)
{
    for (int j= 1; j <= num; j++) // make rectangle with num and then give space 
    {                             // half pyramid 180 degree rotation
       if (j<=num-i)
       {
           cout<<"   ";
       }else
       {
           cout<<" * ";
       }
       
       
    }
    cout<<endl;
}*/

/*for (int i = 1; i <= num; i++)
{
    for (int j= 1; j <= i; j++)// half pyramid using numbers
    {
     cout<<j; // in this we have to print column instead of row
    }
    cout<<endl;
}*/

/*for (int i = num; i >=1; i--)
{
    for (int j= 1; j <= i; j++) //half pyramid inverted using numbers
    {
        cout<<j; //in this we have to print column instead of row
    }
    cout<<endl;
}*/
/*for (int i = 1; i <= num; i++)
{
    for (int j= 1; j <= i; j++)  //half pyramid using numbers
    {
        cout<<i;
    }
    cout<<endl;
}*/

/*for (int i = 1; i <= num; i++)
{
    for (int j=1;j<=num-i+1;j++)  // inverted half pyramid using numbers
    {
     cout<<i;   
    }
    cout<<endl;
}*/
/*int count=1;
for (int i = 1; i <= num; i++)
{
    for (int j= 1; j <= i; j++)  //floyd's triangle
    {
        cout<<count;
        count++;
    }
    cout<<endl;
}*/

/*for (int i = 1; i <= num; i++)
{
    for (int j= 1; j <= i; j++)  
    {
        if ((i+j)%2==0)   // 0-1 pattern
        {
            cout<<" 1 ";
        }else
        {
            cout<<" 0 ";
        }
        
        
    }
    cout<<endl;
}*/


 
/*for (int i = 1; i <=num; i++)
{
    for (int j = 1; j <=num-i; j++)   //rhombus
    {
        cout<<"  ";
    }
    for (int j = 1; j <= num; j++)
    {
        cout<<" * ";
    }
    
    cout<<endl;
}*/

/*for (int i = 1; i <=num; i++)
{
    for (int j = 1; j <=num-i; j++)   //pyramid number pattern 
    {
        cout<<" ";
    }
    for (int j = 1; j<=i; j++)
    {
       cout<<j<<" ";
    }
    cout<<endl;
    
}*/


/*for (int i = 1; i <= num; i++)// palindromic pattern
{
    int j;
    for ( j  = 1; j <= num-i; j++)
    {
        cout<<"  ";
    }
    int count=i;
    for(;j<=num;j++) // loop start from where ,there last loop end num-i
    {
        cout<<count--<<" ";
     // for left part of pattern

    }
    count=2;
    for (;j<=num+i-1;j++) // loop start from where ,there last loop end num
    {
        cout<<count++<<" ";
        
    }
     cout<<endl;
}*/


/*for (int i = 1; i <=num; i++) //star pattern
{
    for (int j= 1; j <= num-i; j++)
    {
        cout<<" ";

    }
    for (int j = 1; j <=2*i-1; j++)// for upper part
    {
        cout<<"*";
    }
    
    cout<<endl;
}
for (int i =num;i>=1; i--)
{
    for (int j= 1; j <= num-i; j++) //for lower part
    {
        cout<<" ";

    }
    for (int j = 1; j <=2*i-1; j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
}*/


/*    for (int i =1; i <=3; i++)  // zig zag pattern
    {
        for (int j = 1; j <= num; j++)
        {
            if (  ( i+j )%4==0 || i==2 && j%4==0 )
            {
                cout<<"*";
            }else
            {
                cout<<" ";
            }
            
            
        }
        cout<<endl;
    }*/

}