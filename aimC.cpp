#include<bits/stdc++.h>

using namespace std;

int i,j,n,ex,k,len;

char s[1005];

int main()
{
    cin>>s;
    cin>>k;
    len=strlen(s);

    sort(s,s+len);


    for(i=0;i<len;i++)
    {
        if(s[i]==s[i+1])ex++;
    }

    if((len-ex)<k)
    {
        if(len<k)cout<<"impossible";
        else cout<<k-len+ex;

            }
    else cout<<0;


    return 0;
}
