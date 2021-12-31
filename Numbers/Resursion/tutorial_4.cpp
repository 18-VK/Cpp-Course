#include<bits/stdc++.h>
using namespace std;
// Question 1 :- generate permutations  // some doubt
/*void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++ )
    {
        char ch=s[i];
        // s.substr(begin,end)
        string rest=s.substr(0,i)+s.substr(i+1);
        permutation(rest,ans+ch);
    }
    

}
int main()
{
permutation("ABC","");
}*/

int countpath(int start,int end) 
{
    if(start==end)
    {
        return 1; //base
    }
    if (start>end)
    {
        return 0;
    }
    int count=0;
    for (int i = 1; i <=6; i++)
    {
     count+=countpath(start+i,end);
     cout<<count<<endl;
    }
    
    return count;
}
int main()
{
    cout<<countpath(0,3);
}