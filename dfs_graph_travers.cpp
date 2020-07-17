#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi graph[MAX];
int visited[MAX];


void dfs(int s)
{

    visited[s]=1;
    for(vector<int> :: iterator iter=graph[s].begin();iter!=graph[s].end();iter++)
    {
        if(visited[*iter]==0){
        printf("%d to %d\n",s,*iter);
        dfs(*(iter));
        }

    }
}

int  main()
{
    int i,j,k,N,E;
    cin>>N>>E;
    for(i=0;i<E;i++)
    {
        int a,b;
        cin>>a>>b;

        graph[a].push_back(b);
    }
    memset(visited,0,sizeof(visited));
dfs(1);
    return 0;
}
