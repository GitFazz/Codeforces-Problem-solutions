#include<bits/stdc++.h>
#define MAX 10000
using namespace std;

int main()
{
    int N,a,b,i,ttl,c=1;
    while(cin>>N)
    {
        int cnt=0;
        if(N==0)break;
        map<int,int> node;
        vector <int> graph[MAX];
        for(i=0;i<N;i++)
        {
        int a,b;
        cin>>a>>b;
        if(node.find(a)==node.end())
        {
            node[a]=cnt;
            cnt++;
        }
        if(node.find(b)==node.end())
        {
            node[b]=cnt;
            cnt++;
        }
        graph[node[a]].push_back(node[b]);
        graph[node[b]].push_back(node[a]);
        }
        while(cin>>a>>ttl)
        {
            if(a==0&&ttl==0) break;
        queue<int> Q;
        int level[MAX];
        int visited[MAX];
        memset(level,-1,sizeof(level));
        memset(visited,0,sizeof(visited));
        level[node[a]]=0;
        visited[node[a]]=1;
        Q.push(node[a]);

        while(!Q.empty())
        {
            int u=Q.front();
            Q.pop();
            for(vector<int>::iterator iter=graph[u].begin();iter!=graph[u].end();iter++)
            {
                if(visited[*iter]==0)
                {
                    visited[*iter]=1;
                    Q.push(*iter);
                    level[*iter]=level[u]+1;
                }
            }
        }
        int ans=0;
        int nsize=node.size();
        for(i=0;i<nsize;i++)
        {
            if(level[i]>ttl)ans++;
        }
        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c,ans,a,ttl);
        c++;
}

int nsize=node.size();
for(i=0;i<nsize;i++)
{
    graph[i].clear();
}
node.clear();

}
 return 0;
}
