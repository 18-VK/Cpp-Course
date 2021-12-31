#include<iostream>
using namespace std;
// declartion and initialization of pointer
/*int main()
{
    int a=10;
  int *aptr=&a; // dec. and initialize
 cout<<*aptr<<endl; // *aptr having value of a 
 cout<<aptr<<endl; // aptr having address of a which is in hexadecimal  

}*/
// pointer arithemetic
// we can only do four arth. operation by pointer ex:- ++,-- ,+,-
// we can use array as pointer
/*int main()
{
int arr[]={12,18,98};
int *ptr=arr; // we have no need to & bcoz array already having address of index 0 
cout<<*ptr<<endl; //before increment  output be 12

ptr++; // prt of int will increment 4 bit which will shift array to index 1 so on.. 
// after increment output should be 18
cout<<*ptr<<endl;

}*/

// pointer to pointer reference

/*int main()
{
  int b=10;
  int *p=&b; // pointer 1 having address of b
  int **q= &p; //  pointer 2 having address of pointer 1
  
  cout<<p<<endl; // output : add. of b
  cout<<*p<<endl; //  single dereference output : value of b
  cout<<q<<endl; // output : add. of p
  cout<<*q<<endl; // output : value of p which is address of b
  cout<<**q<<endl; // output : value of p which is value of b
}*/