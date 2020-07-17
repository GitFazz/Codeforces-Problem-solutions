#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int color[MAX];
int visited[MAX];
int main()
{
    long long int i,j,k,n,ans;
    cin>>n;
    vector<int> graph[n];
    map<long long int,long long int> cnt;
    for(i=0;i<n-1;i++)
    {
        long long int a,b;
        cin>>a>>b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<long long int> Q;
    Q.push(0);
    visited[0]=1;
    color[0]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(vector<int> :: iterator iter=graph[u].begin();iter!=graph[u].end();iter++)
        {
            if(visited[*iter]==0)
            {
                if(color[u]==1)color[*iter]=2;
                else if(color[u]==2)color[*iter]=1;
                visited[*iter]=1;
                Q.push(*iter);
            }
        }
    }
    for(i=0;i<n;i++)cnt[color[i]]++;
    ans=cnt[1]*cnt[2]-n+1;
    cout<<ans<<endl;

    return 0;
}
