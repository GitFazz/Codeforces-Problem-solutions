#include<bits/stdc++.h>
using namespace std;

int i,j,k,n,flag=0,s=1,m,x;
int main()
{
    cin>>n>>k>>m;
    vector<int> V[100005];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(s){
        V[x%m].push_back(x);
        if(V[x%m].size()==k)
            {
                j=x%m;
                flag=1;
                s=0;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Yes"<<endl;
        for(vector<int>::iterator it=V[j].begin();it!=V[j].end();it++)
        {
            cout<<*it<<" ";
        }
        return 0;
    }
    cout<<"No";
}

