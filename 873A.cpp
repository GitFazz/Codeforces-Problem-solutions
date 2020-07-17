#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,l,ans=0;
    cin>>n>>k>>l;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if(i>=(n-k))
            ans+=l;
        else ans+=j;
    }
    cout<<ans;
    return 0;
}
