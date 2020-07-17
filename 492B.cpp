#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,n,l;
float d,dmax;
int lp[101];
int main()
{
    cin>>n>>l;
    for(i=0;i<n;i++)cin>>lp[i];
    sort(lp,lp+n);
    lp[n]=l;
    dmax=lp[0];
    for(i=0;i<n;i++)
    {
        d=lp[i+1]-lp[i];
        if(d>dmax)dmax=d;
    }
    dmax=dmax/2;
    printf("%.9f",dmax);
    return 0;
}
