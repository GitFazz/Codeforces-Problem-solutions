#include<bits/stdc++.h>
using namespace std;

long long int i,j,n,k,t;

int main()
{

    cin>>n>>k>>t;

    if(t<=n)
    {

        if(t<=k)
            cout<<t;
        else
            cout<<k;

    }
    else
    {
        if((t-n)<=k)
            cout<<k-(t-n);
        else cout<<0;
    }



    return 0;
}
