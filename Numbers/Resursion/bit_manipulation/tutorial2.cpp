#include<iostream>
using namespace std;
// Question 1 find the number is power of 2 by bit manipulation
// if true return 1
/*bool is_powerof(int n)
{
    return (n && !(n & (n-1)));   // n && for check n is not 0
}
int main()
{
cout<<is_powerof(16)<<endl;
}*/

// Question 2 find how many set bit (1's ) in the given number

/*int ones(int n)
{
    int count=0;
    while (n>0)
    {
        n=n&n-1;
        count++;
    }
    return count;
}
int main()
{
 cout<<"there are "<<ones(19)<<" ones."<<endl;
}*/