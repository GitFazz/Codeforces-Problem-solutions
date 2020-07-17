#include<bits/stdc++.h>
using namespace std;
    string s;
    int pos[10000];
    int i,j,k,imax;
int main()
{

    cin>>s;
    int len=s.size();
    for(i=0;i<len;i++)
        if(s[i]=='1')
        {
            int si=len-i-1;
            if(si>imax)imax=si;
        }

    if(imax>=6)cout<<"yes"<<endl;
    else cout<<"no";

    return 0;
}
