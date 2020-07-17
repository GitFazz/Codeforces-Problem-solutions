#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int i,j,k,n,cnt=1,ans=0;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);

    for(i=0;i<n;i++)
    {

        if(a[i]==a[i+1])
        {
            cnt++;
        }
        else
        {

            if(cnt>=k)ans++;

             cnt=1;
        }



    }
    cout<<ans<<endl;

    return 0;
}
