#include<iostream>
using namespace std;
/*int main()
{
    int n,m;
    cout<<"enter the size of 2D array"<<endl;
    cin>>n>>m;
    int arr[n][m];
    // logic for taking input of 2D array
    
    for (int i = 0; i <n; i++) 
    {               
        for (int j = 0; j < m; j++)
        {
           cin>> arr[i][j];
        }
        cout<<endl;
    }   
    // logic for print output 
    cout<<"2D array are:"<<endl;
    for (int i = 0; i <n; i++) 
    {               
        for (int j = 0; j < m; j++)
        {
           cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}*/

//Question 1 seraching element x in 2D array
/*int main()
{
    int n,m;
    cout<<"enter the size of 2D array"<<endl;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];

        }
        cout<<endl;
    }
    int x;// element 
    cout<<"enter element which you want to find"<<endl;
    cin>>x;
    bool flag=0;  // not necessary just for check 
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==x)
            {
              
               
               flag=1; // hit true
            }
        }
    }
    if (flag=1)
    {
       cout<<" element is found: "<<x;
    }else
    {
        cout<<"element is'nt found"<<endl;
    }
    
    }*/

// Question 2:- spiral order matrix traversal
/*int main()
{
    int n,m;
    cout<<"enter the size of 2D array"<<endl;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin>>a[i][j];

        }
        cout<<endl;
    }
    
    int row_start=0,row_end=n-1;// end=size of row(n)
    int col_start=0,col_end=m-1;//col_end=size of col(m)

    while (row_start<=row_end && col_start<=col_end)
    {
        // for print Ist row
        for (int row = col_start; row <=col_end; row++)
        {
            cout<<a[row_start][row]<<"  ";
        }
        row_start++; 
        // for print last column
        for (int col = row_start; col <=row_end; col++)
        {
            cout<<a[col][col_end]<<"  ";
        }
        col_end--;
        // for print last row
        if(row_start<=row_end)
        {
        for (int row = col_end; row >=col_start; row--)
        {
            cout<<a[row_end][row]<<"  ";
        }
        row_end--;
        }
        // for Ist column
        if(col_start<=col_end)
        {
        for (int col = row_end; col >=row_start; col--)
        {
         cout<<a[col][col_start]<<"  ";   
        }
        col_start++;
        }
    }
    
}*/

// Question 3 matrix transpose
/*int main()
{
    int n,m;
    cout<<"enter the size of matrix"<<endl;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    
    // transpose logic

    for (int i = 0; i <n; i++)
    {
    for (int j = i+1; j < m; j++) // we started j from i+1 bcoz we don't need to transpose
                                     // diagonal matrix
    {
      // swap
     int temp=a[i][j];
     a[i][j]=a[j][i];
     a[j][i]=temp;

    }
    }

    for (int i = 0; i <n; i++)
    {
    for (int j = 0; j <m; j++)
    {
        cout<<a[i][j]<<"  ";
    }
    cout<<endl;
    }
    
}*/
// Question 4 :- matrix multiplication
/*int main()
{
    int s1,s2,s3; // sizes of matrix
    cout<<"enter the sizes of matrices"<<endl;
    cin>>s1>>s2>>s3;
    // we know that we can do multiplication only when the no of row in m1 is equal to no of
    // column in m2 according to maths or vice versa
    int m1[s1][s2];
    int m2[s2][s3];
    // taking input logic
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j <s2; j++)
        {
            cin>>m1[i][j];
        }
        cout<<endl;
    }
    for (int i = 0; i < s2; i++)
    {
        for (int j = 0; j <s3; j++)
        {
            cin>>m2[i][j];
        }
        cout<<endl;
    }
    // answer logic
  // we know the the after mul. answer of m1 and m2 will be size of s1xs3
  int ans[s1][s3];
    for (int i = 0; i <s1; i++)
    {
        for ( int j = 0; j < s3; j++)
        {
            ans[i][j]=0;
        }
    }

    // multiplication logic
    for (int i = 0; i <s1; i++) // i denotes row of m1
    {
        for (int j = 0; j< s3; j++) // j denotes col of m2
        {
            for (int k = 0; k < s2; k++) // k denotes col of m1 and row of m2
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    // print answer logic
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j <s3; j++)
        {
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}*/
//Question 5:- matrix search (from sorted matrix mean every row will sorted and every col will sorted)
// we have two methods :- 1. iterate tow loop and compare all elements[time comp.= O(nm)]
//                        2. fix a point and if fix point < req. element then ++ and if fix point > --
//                          if fix point == req. elem. the return true // this method can save our time
// we have two choices for method 2nd, we can fix point at (last row first col) or (fist row last col)
int main()
{
int n,m;
cout<<"enter the size of matrix"<<endl;
cin>>n>>m;
int a[n][m];
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <m; j++)
    {
        cin>>a[i][j];

    }
    cout<<endl;
}
int element;
cout<<"enter the element you would like to find"<<endl;
cin>>element;
// method 1
/*for (int i = 0; i <n; i++)
{
    for (int j = 0; j <m; j++)
    {
        if (a[i][j]==element)
        {
             found=true;
        }
    }   
}
if (found==true)
{
    cout<<"element is found"<<endl;
}else
{
    cout<<"element does not exist"<<endl;
}*/
bool found=false;


// method 2
int row=0,col=m-1;// first row and last column
while (row<n and col>=0)
{
    if (a[row][col]==element)
    {
        found =1;
    }
     if (a[row][col]>element)
    {
        col--;
    }else
    {
        row++ ;// if a[row][col]<element
    } 
}
if (found==true)
{
    cout<<"element is found"<<endl;
}else
{
    cout<<"element does not exist";
}

}
