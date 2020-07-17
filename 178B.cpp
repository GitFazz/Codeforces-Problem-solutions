#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(i=0;i<=n;i++)cin>>a[i];
    for(j=0;j<=m;j++)cin>>b[j];
    if(m>n)cout<<"0/1"<<endl;
    else if(n>m)
    {
        if((a[0]*b[0])<0)cout<<"-Infinity"<<endl;
        else cout<<"Infinity"<<endl;
    }
    else
    {
        if(a[0]*b[0]<0)cout<<"-";
        a[0]=abs(a[0]);
        b[0]=abs(b[0]);
        cout<<a[0]/__gcd(a[0],b[0])<<"/"<<b[0]/__gcd(a[0],b[0])<<endl;
    }
  return 0;
}
