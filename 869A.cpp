#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,n,ans;
bool check[100000000];
long long int a[10000],b[10000];
int main()
{
    cin>>n;
    memset(check,false,sizeof(check));
    for(i=0;i<n;i++){
        cin>>a[i];
        check[a[i]]=true;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        check[b[i]]=true;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(check[a[i]^b[j]])ans++;
    }
    if(ans%2)cout<<"Koyomi"<<endl;
    else cout<<"Karen"<<endl;

}
