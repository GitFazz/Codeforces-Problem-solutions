#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k; char ch=-1;
    map<char,int> cnt;
    string str;
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>ch)ch=str[i];
        cnt[str[i]]++;
    }

    for(int i=0;i<cnt[ch];i++)cout<<ch;


    return 0;
}
