#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter a character\n";
    cin>>button;
    switch (button)
    {
    case 'a' :
        cout<<"hello";
        break;
    case 'b':

    cout<<"namaste";
    break;
    case 'c':

    cout<<"hola";
    break;
    case 'd':
    cout<<"ciao";
    break;
    case 'e':
    cout<<"salute";
    break;
    
    default:
    cout<<"i am still learning";
        break;
    }
}