#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,n,dis=1000000000,Ndis,tmp,chk;
long long int a[100005],ans[3];
int main()
{
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(dis>a[i+1]-a[i])dis=a[i+1]-a[i];
        if(a[i+1]!=a[i])chk=1;
    }
    ans[j++]=a[0]-dis;

    if(n==1)
    {
        cout<<-1;
        return  0;
    }
    if(chk==0)
    {
        cout<<1<<endl<<a[0];
        return 0;
    }
    if(n==2){
        if((a[0]+a[1])%2==0)ans[j++]=(a[0]+a[1])/2;
    }
    else{
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]!=dis)
        {
            Ndis++;
            tmp=a[i+1]-a[i];
            k=i;
        }
    }

    if(Ndis>1)
    {
        cout<<0;
        return 0;
    }
    if(Ndis==1)
    {
        if(tmp==2*dis)
        {
            cout<<1<<endl<<a[k]+dis;
            return 0;

        }
        else
        {
            cout<<0;
            return 0;
        }
    }
    }
    ans[j++]=a[n-1]+dis;
    cout<<j<<endl;
    for(i=0;i<j;i++)
        cout<<ans[i]<<" ";

    return 0;
}
