#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main()
{
    int T,N,E,i,u=0;
    int color[MAX];
    while(cin>>N)
    {
        memset(color,0,MAX);
        if(N==0)break;
        cin>>E;

        vector< list<int> > adj(N);

        for(i=0;i<E;i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
     list<int> :: iterator iter;
     queue<int> Q;
     Q.push(0);
     color[0]=1;
     while(!Q.empty())
     {
         u=Q.front();
         Q.pop();
         for(iter=adj[u].begin();iter!=adj[u].end();iter++)
         {
             Q.push(*iter);
             if(color[u]==1&&color[*iter]==0)color[*iter]=2;
             else if(color[u]==2&&color[*iter]==0)color[*iter]=1;

             if(color[u]==color[*iter]&&color[u]!=0)
             {
                 cout<<"NOT BICOLORABLE."<<endl;
                 goto en;
             }


         }
         adj[u].erase(adj[u].begin(),adj[u].end());
     }
     cout<<"BICOLORABLE."<<endl;
     en:
         {

         }

    }


}
