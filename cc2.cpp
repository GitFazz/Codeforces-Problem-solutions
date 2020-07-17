#include<bits/stdc++.h>
using namespace std;

long long int i,j,k,a,b,c,t,n,ans;


int main()
{
        cin>>t;
    while(t--){
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans|arr[i];
    }
    cout<<ans<<endl;



    }

    return 0;
}
