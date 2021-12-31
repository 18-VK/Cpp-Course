#include<iostream>
using namespace std;
int main()
{
   //int row,col;
    //cin>>row>>col;
    
   /* for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/

   /* for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            if (i==1||j==1 || i==row|| j==col)
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

   /* for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=i;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }*/

    /*for (int i = num; i >=1; i--)
    {
        for (int j = 1; j <=i;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }*/
    
/*for (int i = 1; i <= num; i++)
{
    for (int j = 1; j<=num; j++)
    {
        if (j<=num-i)
        {
            cout<<" ";
        }
        else
        {
            cout<<"*";
        }
        
       
    }
    cout<<endl;
}*/

/*for (int i = 1; i <=num; i++)
{
    for (int j = 1;j <=i; j++)
    {
        cout<<j;    
    }
    cout<<endl;
}*/

/*for (int i = num; i>=1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<j;
    }
    cout<<endl;

}*/

/*for (int i = 1; i <=num; i++)
{
    for (int j = 1;j <=i; j++)
    {
        cout<<i;    
    }
    cout<<endl;
}*/
for (int i = 1; i <=num; i++)
{
    for (int j = 1; j <=num-i+1; j++)
    {
        cout<<i;
    }
    cout<<end;
}


}