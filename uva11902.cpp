#include<bits/stdc++.h>
using namespace std;
#define MAX 102


int i,j,k,n,m,N,T;
char ans[MAX][MAX];
int visited[MAX];
vector<int> graph[MAX];
void dfs(int s,int off)
{
    visited[s]=1;
    for(vector<int> :: iterator iter=graph[s].begin();iter!=graph[s].end();iter++)
    {
        if(visited[*iter]==0&&*iter!=off)
        {
            ans[off][*iter]='N';
            dfs( *iter,off);
        }
    }
}
int main()
{
    cin>>T;
    while(T--){
    cin>>N;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
    {
        int t;
        if(j>=i)ans[i][j]='Y';
        else ans[i][j]='N';
        cin>>t;
        if(t==1)          graph[i].push_back(j);
    }

    for(i=1;i<N;i++)
    {
        memset(visited,0,sizeof(visited));
        dfs(0,i);
    }

    for(i=0;i<N;i++){

        cout<<'+';
        for(j=0;j<2*N-1;j++)cout<<'-';
        cout<<'+'<<endl;

        for(j=0;j<N;j++)
    {
        cout<<'|';
        cout<<ans[i][j];
    }
    cout<<'|';
    cout<<endl;
}
cout<<'+';
        for(j=0;j<2*N-1;j++)cout<<'-';
        cout<<'+'<<endl;
        for(i=0;i<N;i++)graph[i].clear();
    }


    return 0;
}
