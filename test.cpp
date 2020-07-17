#include<bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int i, j, x=0, id1=0, id2=0, y=0, k=0, n, c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=0; i<105; i++)
    {
        if(a[i]>0&&k==0)
        {
            x=a[i];
            id1=i;
            k=1;
        }
        else if(a[i]>0&&k==1)
        {
            y=a[i];
            id2=i;
            k=2;
        }
        else if(a[i]>0&&k==2){cout<<"NO"; return 0;}
    }
    if(x==y&&((x+y)==n)){cout<<"YES"<<endl<<id1<<' '<<id2; return 0;}
    else{cout<<"NO"; return 0;}

}
