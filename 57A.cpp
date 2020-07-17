#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,d,i,j,k,tmp,flags=0,flagd=0,cnt=0;
int main()
{
    cin>>n>>a>>b>>c>>d;
    j=0;
    for(i=0;i<n;i++)
    {
        if(a==i&&b==j)flags=1;
        if(c==i&&d==j)flagd=1;
        if(flags==0&&flagd==1)cnt++;
        if(flagd==0&&flags==1)cnt++;
        if(flags==1&&flagd==1)goto ans;
    }
    i=n;
    for(j=0;j<n;j++)
    {
             if(a==i&&b==j)flags=1;
        if(c==i&&d==j)flagd=1;
        if(flags==0&&flagd==1)cnt++;
        if(flagd==0&&flags==1)cnt++;
        if(flags==1&&flagd==1)goto ans;
    }
    j=n;
    for(i=n;i>0;i--)
    {
        if(a==i&&b==j)flags=1;
        if(c==i&&d==j)flagd=1;
        if(flags==0&&flagd==1)cnt++;
        if(flagd==0&&flags==1)cnt++;
        if(flags==1&&flagd==1)goto ans;
    }
    i=0;
    for(j=n;j>0;j--)
    {
        if(a==i&&b==j)flags=1;
        if(c==i&&d==j)flagd=1;
        if(flags==0&&flagd==1)cnt++;
        if(flagd==0&&flags==1)cnt++;
        if(flags==1&&flagd==1)goto ans;

    }

ans:
    {
        if(((4*n)-cnt)<cnt)cout<<(4*n)-cnt;
        else cout<<cnt;
    }
return 0;
}
