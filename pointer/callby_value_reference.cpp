#include<iostream>
using namespace std;
// call by value or passing by value
// Note :- change while not reflect in main() function
/*void increment(int a)
{
    a++;
}
int main()
{
    int a=10;
    increment(a);
    cout<<a;
}*/

// call by reference
/*void swap(int *a , int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10,b=20;
    cout<<"a is "<<a<<endl; // before function call
    cout<<"b is "<<b<<endl;
    int *aptr=&a;
    int *bptr=&b;
    // after calling
    swap(aptr,bptr); // aptr address of a and we can use &a same in the case of b
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

}*/
// call by reference without using pointer
/*void swap(int &a, int &b)
{
    int temp= a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=20;
    cout<<"a is "<<a<<endl; // before function call
    cout<<"b is "<<b<<endl;
    
    ;
    // after calling
    swap(a,b); // aptr address of a and we can use &a same in the case of b
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;

}*/

