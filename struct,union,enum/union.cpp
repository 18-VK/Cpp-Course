#include<iostream>
#include<bits/stdc++.h>
using namespace std;
union student
{
int marks;
char grade;
};
int main()
{
    union student s1;
    s1.marks=34;
    cout<<s1.marks<<endl;
    s1.grade='c';
    cout<<s1.marks<<endl; // now we will get garbage wale becoz now s1.grade any memory location 
    
return 0;
}