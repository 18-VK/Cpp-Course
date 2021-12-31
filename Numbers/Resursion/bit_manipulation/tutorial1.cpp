#include<bits/stdc++.h>
using namespace std;
//if you want a bit from specific postion 
/*int getbit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}
int main()
{
getbit(5,2);
cout<<"the bit we want is: "<<getbit(5,2)<<endl;
return 0;
}*/

// set bit

/*int setbit(int n,int pos)
{
    return (n|(1<<pos)); // this time they return answer not true false 
}
int main()
{
    cout<<"The number after set a bit: "<<setbit(5,1)<<endl;
    return 0;
}*/

// clear bit and get answer as output

/*int clear_bit(int n , int pos)
{
    int mask= ~(1<<pos);
    return (n & mask);
}
int main()
{
    cout<<clear_bit(5,2)<<endl;
}*/

// update bit for this first clear bit at that pos. the set bit at that  position

/*int update_bit(int n,int pos,int value)
{
    // for clear 
  int mask= ~(1<<pos);
  n= (n & mask); // now n have clear bit value (in this case it is 0101)

 // for set
  return (n|(value<<pos)); // value indicate the value which we want to update 

}
int main()
{
    cout<<update_bit(5,1,1)<<endl;
}*/
