#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,sum=0;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++) scanf("%lld",&b[i]);
    sort(b,b+n);

    if((b[n-1]+b[n-2])>=sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
