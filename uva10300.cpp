#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,q;
    cin>>t;
    while(t--)
    {
        int n,animal,yard,rate;
        int ans=0;
        cin>>n;
        while(n--)
        {

            cin>>yard>>animal>>rate;
            ans+=yard*rate;
        }
        cout<<ans<<endl;;



    }


    return 0;
}
