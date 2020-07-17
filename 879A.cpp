#include<bits/stdc++.h>
using namespace std;
int i,j,k,n;
int s[1005],d[1005];
int nthDay(int start,int s,int d)
{
    int i=1,ans=0;
    while(ans<=start)
    {
        ans=s+(i-1)*d;
        i++;
    }
    return ans;
}
int main()
{
    cin>>n;
    for(i=0;i<n;i++)cin>>s[i]>>d[i];
    int day=nthDay(0,s[0],d[0]);
    for(i=1;i<n;i++)
    {
        day=nthDay(day,s[i],d[i]);
    }
    cout<<day;
    return 0;
}
