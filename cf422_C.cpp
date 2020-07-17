#include<bits/stdc++.h>
using namespace std;
long long int n,x,a,b,cnt,i,j,k,mincost=2000000005,tcost;

struct fuckoff{

    long long int l;
    long long int r;
    long long int cost;
    long long int d;
}v[1000000];

int main()

{
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>v[i].l>>v[i].r>>v[i].cost;
        v[i].d=v[i].r-v[i].l+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(((v[i].d+v[j].d)==x)&&(v[i].r<v[j].l||v[j].r<v[i].l))
            {
                tcost=v[i].cost+v[j].cost;
                if(tcost<mincost)mincost=tcost;
                k=1;
            }


        }

    }
    if(k)cout<<mincost<<endl;
    else cout<<"-1"<<endl;


    return 0;
}
