#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,op=0,i,a[10000],mx=-1,j=0,t,ij,ik,flag=0;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        t=a[i];
        if(t==k)
        {
            ik=i;
            j=1;
        }
        if(t>k&&flag==0)
        {
            flag=1;
            ij=i;
        }
    }

    if(j)cout<<k-ik+j<<endl;
    else if(flag==1)
    {
        cout<<k-ij<<endl;
    }
    else cout<<k-n;

    return 0;
}
