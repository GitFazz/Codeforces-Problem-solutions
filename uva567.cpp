#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int main()
{
    int a,b,j=0,i=0,N;


    while(cin>>a)
    {
        vector< list<int> > adj(20);

        if(i<19){


            for(int j=0;j<a;j++)
            {
                cin>>b;
                b--;
                adj[i].push_back(b);
                adj[b].push_back(i);
            }
            i++;
        }

        else{
        i=0;
        int u,cnt=1;
        cin>>N;

            cout<<"Test Set #"<<cnt<<endl;
            cnt++;

        queue<int> Q;
        int level[MAX];
        int visited[MAX];


        while(N--)
        {
            int x,y;
            cin>>x>>y;
            memset(level,0,sizeof(level));
            memset(visited,0,sizeof(visited));
            x--;
            y--;
            Q.push(x);
            visited[x]=1;
            list<int> :: iterator iter;

            while(!Q.empty())
            {
                u=Q.front();
                Q.pop();

                for(iter=adj[u].begin();iter!=adj[u].end();iter++)
                {
                   if(visited[*iter]==0){
                    level[*iter]=level[u]+1;
                    Q.push(*iter);
                    visited[*iter]=1;
                    }
                }
             //cout<<"size="<<Q.size()<<endl;
            }



            cout<<x+1<<" to "<<y+1<<": "<<level[y]<<endl;
        }
        }

   adj.clear();
    }

  return 0;


}
