
#include<bits/stdc++.h>
#define MAX 30005
using namespace std;

int visited[MAX];
int main()
{
    long long int i,j,k,n,a;
    vector<long long int> graph[MAX];
    cin>>n>>k;
    k--;
    for(i=0;i<n-1;i++)
    {
        cin>>a;
        graph[i].push_back(i+a);
    }
    queue<long long int> Q;
    visited[0]=1;
    Q.push(0);
    while(!Q.empty())
    {
        long long int u=Q.front();
        Q.pop();
        for(vector<long long int> :: iterator iter=graph[u].begin();iter!=graph[u].end();iter++)
        {
            if(visited[*iter]==0)
            {
                Q.push(*iter);
                visited[*iter]=1;
                if(k==*iter)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
