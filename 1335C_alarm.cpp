#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
#define MAXX 1000000005
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

/*******************Main Code******************/

bool visited[300000];
vi graph[300000];
lli size[300000];
lli depth[300000];

void dfs(int node)
{

    visited[node]=1;
    size[node]++;
    for(int i=0;i<graph[node].size();i++)
    {
        if(visited[ graph[node][i] ]==0){
            depth[ graph[node][i] ] = depth[node] + 1;
            dfs(graph[node][i]);
            size[node] += size[graph[node][i]];
        }

    }
}


int main(){
std::ios::sync_with_stdio(false);

  //freopen("input.txt","r",stdin);
 // freopen("output.txt","w",stdout);

  int n,k,u,v;
  cin>>n>>k;

  for(int i=0;i<n-1;i++)
  {
      cin>>u>>v;
      graph[u].push_back(v);
      graph[v].push_back(u);
  }

  dfs(1);

  lli points[n];

  for(int i=1;i<=n;i++)
  {
    points[i-1] = size[i] - depth[i]-1;
  }

  sort(points,points+n);
  reverse(points,points+n);

  lli solution = 0;


  for(int i=0;i<(n-k);i++)
  {
      solution += points[i];
  }

  cout << solution << endl;

return 0;
}
