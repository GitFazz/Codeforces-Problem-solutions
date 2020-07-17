#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,a,b,sum=0,total=0,n,m;
    map<long long int,long long int> cnt;
    map<long long int,long long int> visit;
    cin>>n;
    long long int cafe[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&cafe[i]);
        cnt[cafe[i]]++;
        if(cnt[cafe[i]]==1)total+=cafe[i];
    }
    m=cnt.size();
    for(i=n-1;i>=0;i--)
    {
        if(visit.size()==m-1)break;
        visit[cafe[i]]++;
        if(visit[cafe[i]]==1)sum+=cafe[i];
    }
    cout<<total-sum<<endl;

    return 0;
}
