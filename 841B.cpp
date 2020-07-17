#include<bits/stdc++.h>
#define max 1000005
using namespace std;

long long int i,j,k,n,sum;
long long int a[max];

int main()
{
    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum+=(a[i]%2);
    }

    if(sum%2!=0)
    {
        cout<<"First";
        return 0;
    }
    else
    {
        if(sum>0)cout<<"First";
        else cout<<"Second";
    }


    return 0;
}

