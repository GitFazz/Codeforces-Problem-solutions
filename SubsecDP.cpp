#include<bits/stdc++.h>
using namespace std;
#define Max 1000000
long long int i,j,k,n,a,ans=0;
long long int arr[Max],sub[Max];
int main()
{
        cin>>n;
    for(i=0;i<n;i++)cin>>arr[i];


    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>=arr[j]&&(sub[i]<sub[j]+1))sub[i]=sub[j]+1;
            if(sub[i]>ans)ans=sub[i];
        }
    }
    cout<<ans+1<<endl;

    return 0;
}
