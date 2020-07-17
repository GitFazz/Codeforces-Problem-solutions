#include<bits/stdc++.h>
using namespace std;

int a,b,i,j,k,cnt,mincnt=1005,mini;
char s[1005];
char t[1005];

int main()

{
    cin>>a>>b;
    cin>>s>>t;

    for(i=0;i<=(b-a);i++)
    {
        cnt=0;
        for(j=0;j<a;j++)
        {
            if(s[j]!=t[i+j])cnt++;
        }
        if(cnt<mincnt)
        {
            mincnt=cnt;
            mini=i;
        }


    }
        cout<<mincnt<<endl;
        for(i=0;i<a;i++)
        {

            if(s[i]!=t[mini+i])cout<<i+1<<" ";
        }

    return 0;
}
