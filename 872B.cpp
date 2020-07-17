#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,m,aMax=-1000000005,flag=0,bmin=1000000005,amin=1000000005;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>aMax)aMax=a[i];
    }
    if(aMax==a[0]||aMax==a[n-1])flag=1;
    sort(a,a+n);
    if(k==1)
    {
        cout<<a[0];
        return 0;
    }
    else if(k==2)
    {
        if(flag==1)cout<<aMax;
        else
        {
            for(i=1;i<n-1;i++)
            {
                for(j=0;j<i;j++)
                {
                    amin=min(amin,a[j]);
                }
                for(j=i+1;j<n;j++)
                {
                    bmin=min(bmin,a[j]);
                }
                aMax=(amin,bmin);
            }


        }
    }
    else
    {
        cout<<aMax;
    }


    return 0;
}
