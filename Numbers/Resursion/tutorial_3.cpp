#include<bits/stdc++.h>
using namespace std;
/*void reverse_string(string str)
{
    if(str.length()==0)
    {
        return;
    }
    string rest_string =str.substr(1); // substr function gives string from index which you enter e.g index 1
   reverse_string(rest_string);
   cout<<str[0];
   //cout<<str[0]<<endl; is not vaild in this question
   
}
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
 reverse_string(str);
}*/

// Question 2: replace pi to 3.14 value of pi in string

/*void repalce_pi(string str)
{
    if(str.length()==0)
    {
        return;
    }
    if (str[0]=='p' && str[1]=='i')
    {
        cout<<"3.14";
        repalce_pi(str.substr(2));
    }
    else
    {
      cout<<str[0];
      repalce_pi(str.substr(1));
    }
    
}
int main()
{
   string str;
   cout<<"enter the string which include pi"<<endl;
   cin>>str;
   repalce_pi(str);
}*/

// Question 3:- tower of hanoi

/*void tower_of_hanoi(int n,char sour,char help,char dest)
{
 if(n==0)
 {
     return ;
 }
 // move source to helper using dest

 tower_of_hanoi(n-1,sour, dest,help); // move all block instead of last from source to help
 cout<<"move from "<<sour<<" to "<<dest<<endl; // for last block
 // move helper to dest using source as helper
 tower_of_hanoi(n-1,help,sour,dest); // move all block intead of last from help to dest
}
int main()
{
    int n;
    cout<<"no. of block"<<endl;
    cin>>n;
    char A,B,C; // A source , B helper, c destination
    tower_of_hanoi(n,'A','B','C');
}*/

// QUestion 4:- remove duplicate string 

 /*string remove(string str)
{
    if(str.length()==0) // base condition
    {
        return"";
    }
    char alpha=str[0];
    string rest_string=remove(str.substr(1));
    if (alpha==rest_string[0])
    {
        return rest_string; // mean we will remove alpha
    }
    else
    {
        return alpha+rest_string;
    }
}
int main()
{
    string s;
    cout<<"enter the string "<<endl;
    cin>>s;
    cout<< remove(s);
}*/

// Question 5:- move all the string to end

/*string move_to_end(string s)
{
    if (s.length()==0)
    {
        return"";
    }
    char elem=s[0];
    string ans=move_to_end(s.substr(1));
    if(elem=='x')
    {
        return ans+elem;
    }
    else
    {
     return elem+ans;
    }
    
}
int main()
{
    string s;
    cout<<"enter string including characater x"<<endl;
    cin>>s;
    cout<<move_to_end(s);
}*/

//Question 6:- generate all subsequence of a string

/*void subsequence(string s, string ans)
{
     
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    
    char ch=s[0];
    string rest=s.substr(1);
    
    subsequence(rest,ans);
    subsequence(rest,ans+ch);
    
}
int main()
{
    string s;
    cin>>s;
    subsequence(s,"");
}*/

// Question 7:-

      
   
        
