#include<bits/stdc++.h>
using namespace std;


int i,j,k,n;
int a[1005];

int main()
{
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);
    if(a[0]==1)cout<<-1<<endl;
    else
    cout<<1<<endl;

    return 0;
}
