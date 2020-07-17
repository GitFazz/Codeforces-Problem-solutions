#include<bits/stdc++.h>
#define INF 100000
using namespace std;

int i,j,k,R,C,bomb,nb;
int graph[1002][1002];
struct node
{
    int r,c;
    void set(int a,int b)
    {
        r=a;
        c=b;
    }
};


void bfs(int sx,int sy,int dx,int dy)
{
    int visited[R][C];
    for(int i=0;i<R;i++)
    memset(visited[i],0,sizeof(visited[i]));
    int level[R][C];
    for(int i=0;i<R;i++)
    memset(level[i],-1,sizeof(level[i]));
    struct node vnode;
    queue<node> Q;
    vnode.set(sx,sy);
    Q.push(vnode);
    level[sx][sy]=0;
    visited[sx][sy]=1;

    while(!Q.empty())
    {
        vnode=Q.front();
        int u=vnode.r, v=vnode.c;
        Q.pop();
            if(u-1>=0&&graph[u-1][v]==-1&&visited[u-1][v]==1)
            {
            visited[u-1][v]=1;
            vnode.set(u-1,v);
            Q.push(vnode);
            level[u-1][v]=level[u][v]+1;
            }
            if(u+1<=R&&graph[u+1][v]==-1&&visited[u+1][v]==0)
            {
                visited[u+1][v]=1;
                vnode.set(u+1,v);
                Q.push(vnode);
                level[u+1][v]=level[u][v]+1;
            }
            if(v-1>=0&&graph[u][v-1]==-1&&visited[u][v-1]==0)
            {
                visited[u][v-1]=1;
                vnode.set(u,v-1);
                Q.push(vnode);
                level[u][v-1]=level[u][v]+1;
            }

            if(v+1<=C&&graph[u][v+1]==-1&&visited[u][v+1]==0)
            {
                visited[u][v+1]=1;
                vnode.set(u,v+1);
                Q.push(vnode);
                level[u][v+1]=level[u][v]+1;
            }

    }
            cout<<level[dx][dy]<<endl;
}


int main()
{
    while(scanf("%d%d",&R,&C)==2)
    {
        if(R==0&&C==0)break;
        for(i=0;i<R;i++)
            for(j=0;j<C;j++)
             graph[i][j]=-1;
        scanf("%d",&bomb);
        while(bomb--)
        {
     scanf("%d%d",&i,&nb);
     for(j=0;j<nb;j++){
         int t;
        cin>>t;
        graph[i][t]=100000;
     }
        }

        int p,q,r,s;
        scanf("%d%d%d%d",&p,&q,&r,&s);
        bfs(p,q,r,s);

    }
    return 0;
}
