#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,m,cnt=0;
    long long int visited[100000];
    long long int level[100000];
    memset(visited,0,sizeof(visited));
    memset(level,-1,sizeof(level));
    cin>>n>>m;
    queue<int> Q;
    Q.push(n);
    level[n]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        if(u>m)
        {
            if(visited[u-1]==0){
            Q.push(u-1);
            visited[u-1]=1;
            level[u-1]=level[u]+1;
            }
        }
        else if(u<m)
        {
            if(visited[u-1]==0){
            Q.push(u-1);
            level[u-1]=level[u]+1;
            visited[u-1]=1;
            }
            if(visited[u*2]==0){
            visited[u*2]=1;
            Q.push(u*2);
            level[u*2]=level[u]+1;
            }
        }
        else
        {
            cout<<level[u]<<endl;
            return 0;
        }
    }

    return 0;
}
