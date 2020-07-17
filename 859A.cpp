#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int dis=0;
    for(i=n-1;i>0;i--)
    {
        dis+=(a[i]-a[i-1]-1);
    }
    dis+=(a[0]-1);
    int ans=dis-(25-n);
    if(ans>0)
    cout<<ans<<endl;
    else cout<<0<<endl;

    return 0;
}
