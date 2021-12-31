#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1 and num2\n";
    cin>>num1>>num2;
    char op;
    cout<<"enter operator\n";
    cin>>op;
    switch (op)
    {
    case '+':
        
        cout<<"sum is\n"<<num1+num2;
        break;
    case '-':
    cout<<"diff. is\n"<<num1-num2;

    default:
        break;
    }

return 0;
}