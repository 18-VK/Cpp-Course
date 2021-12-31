#include<bits/stdc++.h>
#include<iostream>
using namespace std;
/*struct employee
{
    // variable declaration
    int ID;
    string name;
    int salary;
    
};*/
// OR
struct employee
{ 
    int ID;
    string name;
    int salary;
    
}E1;  // e1 instead of struct employee E1


int main()
{
    
    //struct employee E1;
    E1.ID=123;
    E1.salary=12000;
    E1.name="harry";
    cout<<E1.name<<endl; 
    cout<<E1.ID<<endl;
    cout<<E1.salary<<endl;

return 0;
}