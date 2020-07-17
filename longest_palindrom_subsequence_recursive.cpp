#include<bits/stdc++.h>
using namespace std;
string ans;
int palindrome(string str,int s,int len)
{
    if(len==1||len==0) return len;
    else if(str[s]==str[s+len-1])
    {
        return (2+palindrome(str,s+1,len-2));
    }
    else return max(palindrome(str,s+1,len-1),palindrome(str,s,len-1));
}

int main()
{
    int i,j,k;
    string str;
    cin>>str;
    cout<<palindrome(str,0,str.length())<<endl;



    return 0;
}
