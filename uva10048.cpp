#include<bits/stdc++.h>
#define MAX 10000
using namespace std;
int p[MAX];
vector< pair<int, pair<int,int> > > graph;
int cost[1000][1000];
vector< int > new_graph[1000];
queue<int> Q;
int visited[MAX];
void bfs(int a,int pa,int b)
{
    int max_cost=0;
    memset(visited,0,sizeof(visited));
    Q.push(a);
    visited[a]=1;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(vector<int>::iterator iter=new_graph[u].begin();iter!=new_graph[u].end();iter++)
        {
            if(visited[*iter]==0){
                if(*iter!=pa)Q.push(*iter);
                visited[*iter]=1;
                if(cost[u][*iter]>max_cost)max_cost=cost[u][*iter];
                if(b==*iter)
                {
                    cout<<max_cost<<endl;
                    return;
                }
            }
        }

}
    }



void mybfs(int a,int b)
{
    for(vector<int>::iterator iter=new_graph[a].begin();iter!=new_graph[a].end();iter++)
    {
        cout<<"mybfs"<<endl;
        bfs(*iter,a,b);

    }
}

int find(int x)
{
    if(p[x]==x) return x;
    return find(p[x]);
}

void myunion(int x,int y)
{
    int a=find(x);
    int b=find(y);
    p[a]=b;
}

bool isSame(int a,int b)
{
    int x=find(a);
    int y=find(b);
    if(x==y)return true;
    else return false;
}

int i,j,k,S,C,Qu,a,b,c;
int main()
{
    while(scanf("%d%d%d",&C,&S,&Q)==3)
    {
        for(int j=1;j<=C;j++)p[j]=j;

        for(i=0;i<S;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            graph.push_back(make_pair(c,make_pair(a,b)));
            cost[a][b]=c;
            cost[b][a]=c;
        }
        sort(graph.begin(),graph.end());

        for(i=0;i<S;i++)
        {
            pair <int, pair<int, int> > temp=graph[i];
            int a=temp.second.first;
            int b=temp.second.second;
            if(find(a)!=find(b))
            {
                myunion(a,b);
                new_graph[a].push_back(b);
                new_graph[b].push_back(a);

            }
        }

        for(i=0;i<Qu;i++)
        {
            cout<<"fdk";
            scanf("%d%d",&a,&b);
            if(find(a)!=find(b))
                cout<<"no path"<<endl;
            else
                mybfs(a,b);
        }

    }
    return 0;
}
