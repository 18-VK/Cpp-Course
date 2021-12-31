#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// question 1- sorted string
/*int main()
{
    string str= "apnibje";
    sort(str.begin(),str.end());
    cout<<"sorted string :"<<str<<endl;

}*/
// question 2:- convert a string which have both upper and lowercase character to all char. in lower or upper

/*int main()
{
    // lowerto upper
    /*string s1= "aman prajapati";
    for (int i = 0; i <s1.size(); i++)
    {
        if (s1[i] >='a'&& s1[i]<='z')  // we know string is a character array 
        // if cindition mean any char is great.than or equal to and less thanor equal to z they will work on them
        {
            s1[i]-=32;
        }
        
    }
    cout<<s1<<endl;*/

    // upper to lower
   /* string s2="AMAN PRAJAPATI";
    for (int i = 0; i <s2.length(); i++)
    {
        if (s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]+=32;
        }
        
    }
    cout<<s2<<endl;
}*/

// NOTE :- if case are combine the we can any of them logic to convert according to need

//   same output with the help of function

/*int main()
{
    string s3="aman prajapati";
    transform(s3.begin(),s3.end(),s3.begin(),::toupper);
    // uppercase
    cout<<s3<<endl;
  // lowercase
  string s2="AMAN PRAJAPATI";
  transform(s2.begin(),s2.end(),s2.begin(),::tolower);
  cout<<s2<<endl;

}*/

//Question 3:- form a greatest numerical string from a numerical string 
// approach sorting technique or sort() function

/*int main()
{
    string s1 ="78931248";
    // for greater
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<endl;
}*/

