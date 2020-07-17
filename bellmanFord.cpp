#include<bits/stdc++.h>
using namespace std;
#define INF 999999
#define MAX 100005

int dist[MAX];
int N,E;

struct edge
{
    int from;
    int to;
    int weight;
}edges[MAX];


bool bellman_ford(int s)
{
    for(int i=0;i<N;i++)
    {
        dist[i] = INF;
    }

    dist[s] = 0;

    for(int ii = 0; ii<N-1;ii++)
    {
        for(int i=0;i<E;i++)
        {
            int u = edges[i].from;
            int v = edges[i].to;
            int w = edges[i].weight;

            if(dist[u]!= INF && dist[u]+ w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for(int i=0;i<E;i++)
        {
            int u = edges[i].from;
            int v = edges[i].to;
            int w = edges[i].weight;

            if(dist[u]!= INF && dist[u]+ w < dist[v])
            {
                return true;
                /// has negative edge cycle
            }
        }

        return false;
        /// doesn't have neg. edge cycle
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin>>N>>E;



    for(int i=0;i<E;i++)
    {
        cin>> edges[i].from >> edges[i].to >> edges[i].weight ;
    }

    int s;
    cin>>s;
    int flag = bellman_ford(s);


    if(flag)
        cout << "the graph has Negative edge cycle" << endl;
    else{
        cout << "the graph does not have Negative edge cycle" << endl;
        for(int i=0;i<N;i++)
        {
            cout << "dist[" << i << "] = " << dist[i] << endl;
        }
    }

    return 0;
}
