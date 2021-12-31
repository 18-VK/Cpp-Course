#include<iostream>
using namespace std;

// question 1:-sum of natural number
/*int sum_natural(int num) 
{
   //int sum=num*(num+1)/2;  // method 1
   int sum=0;
   for (int i = 1; i <=num; i++) // method 2
   {
      sum=sum+i;
   }
   
   return sum;
}
int main()
{
int num;
cout<<"enter the range till you want to sum of num"<<endl;
cin>>num;
cout<<"sum of natural number is:"<<sum_natural(num);
return 0;
}*/

// question 2 :- pythagorain triplet
/*bool pyth(int a, int b ,int c)
{
   int x= max(a,max(b,c));  // max() to find maximum value among these a,b and c 
   // assign maximum value in x
   int y, z; // another side od triangle
if (x==a)
{
   y=b;
   z=c;
}
else if (x==b)
{
   y=a;
   z=c;
}
else  // if x==c
{
   y=a;
   z=b;
}
if ( x*x ==y*y+z*z) // H^2=P^2 +B^2
{
   return true;
}

   return false;

}
int main()
{
int a,b,c;
cout<<"enter and side of triangle"<<endl;
cin>>a>>b>>c;

if (pyth(a,b,c))
{
   cout<<"pythagorian triplet"<<endl;

}else
{
   cout<<"not a pythagorian triplet"<<endl;
}

return 0;
}*/

// Question 3:- binary to decimal conversion
/*int bin_to_dec(int binary)
{
   int last_digit=0;
   int sum=0;
   int count=1;
   while (binary>0)
   {
      last_digit=binary%10;
      sum=sum+count*last_digit; // or sum+=count*last_digit
      count=count*8;
      binary=binary/10;
   }
   return sum;
}
int main()
{
   int binary;
   cout<<"enter any binary number "<<endl;
   cin>>binary;
cout<<"decimal conversion of binary :"<<binary<<" is "<<bin_to_dec(binary);
return 0;
}*/

// Question 4:= octal to decimal

// program same as previous 
// just change , count=count*8;

// Question 6 decimal to binary 
/*int dec_to_bin(int num)
{
  int bin=0;
  int count=1;
while (num!=0)
{
   bin+=(num%2)*count;
   count*=10;
   num/=2;
}
return bin;
}

int main()
{
   int num;
   cout<<"enter any decimal number"<<endl;
   cin>>num;
cout<<dec_to_bin(num);
return 0;
}*/

// Question 7  decimal to octal
/*int dec_to_oct(int num)
{
   int oct=0;
   int count=1;
   while (num!=0)
   {
   oct+=(num%8)*count;
   count*=10;
   num/=8;
   }
   return oct;
}
int main()
{
    int num;
   cout<<"enter any decimal number"<<endl;
   cin>>num;
   cout<<dec_to_oct(num);
   return 0;
}*/
