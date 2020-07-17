#include<bits/stdc++.h>
using namespace std;
#define m 200005
long long int i,j,k,n,q,rec[m],sum[m],l,r;
int main(){
   cin>>n>>k>>q;
   while(n--)
   {
       cin>>l>>r;
       rec[l]++;
       rec[r+1]--;
   }
   for(i=1;i<m;i++)
   {
       rec[i]+=rec[i-1];
       sum[i]+=sum[i-1];
       if(rec[i]>=k)sum[i]++;
   }
   while(q--)
   {
       cin>>l>>r;
       cout<<sum[r]-sum[l-1]<<endl;
   }

    return 0;
}
