#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Question 1:- print students detail using structure
struct student
{
   string name;
   int roll_num;
   int marks;
   char grade;
};  // s[10] instead of  struct student s[10];

int main()
{
    struct student s[4]; // we want to add and display data of 3 students
   for (int i = 1; i <= 3; i++)
   {
       cout<<"enter the name of student"<<i<<endl;
       cin>>s[i].name;
       cout<<"enter the roll number of student"<<endl;
       cin>>s[i].roll_num;  
       cout<<"enter the marks of student "<<i<<endl;
       cin>>s[i].marks;
       cout<<"enter the grade of student"<<i<<endl;
       cin>>s[i].grade;
   }
   cout<<"information of all students"<<endl;
   for (int i = 1; i <=3; i++)
   {
       cout<<"the name of student\n"<<s[i].name<<endl;;
       cout<<"the roll number of student\n"<<s[i].roll_num<<endl;
       cout<<"the marks of student\n "<<s[i].marks<<endl;
       cout<<"the grade of student\n"<<s[i].grade<<endl; 
   }
   
    
return 0;
}