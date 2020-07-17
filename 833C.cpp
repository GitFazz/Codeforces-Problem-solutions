#include<bits/stdc++.h>
using namespace std;

int main(){

long long int i,j,k,l,ans=0,t,n;
map<long long int,long long int> cnt;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>t;
    cnt[t]++;
    if(t==0)ans++;
    else if(cnt[t]>1)ans++;

}
cout<<ans;
}
