#include<bits/stdc++.h>
#define MAX 100000
using namespace std;



 int main()
 {
     long long int N,E,i,x,y,z;
     while(cin>>N>>E)
     {
         vector<long long int> graph[N];
         long long int path[E][E];
         memset(path,0,sizeof(path));

         for(i=0;i<E;i++)
         {
             cin>>x>>y>>z;
             x--;
             y--;
             graph[x].push_back(y);
             graph[y].push_back(x);
             path[x][y]=z;
             path[y][x]=z;
             if(path[x][y]!=0) path[x][y]=z;
             else path[x][y]=min(path[x][y],z);
             if(path[y][x]!=0) path[y][x]=z;
             else path[y][x]=min(path[y][x],z);
         }

        for(i=0;i<N;i++)
        {
            for(vector<long long int> :: iterator iter=graph[i].begin();iter!=graph[i].end();iter++)
            {
                cout<<*iter+1<<" ";
            }
            cout<<endl;
        }

         int one[MAX];
         int last[MAX];
         int visited[MAX];
         memset(visited,0,sizeof(visited));
         memset(one,-1,sizeof(one));
         //memset(last,-1,sizeof(last));
         queue<long long int> Q;
         Q.push(0);
         visited[0]=1;
         one[0]=0;
         while(!Q.empty())
         {
             long long int u=Q.front();
             Q.pop();
             for(vector<long long int>::iterator iter=graph[u].begin();iter!=graph[u].end();iter++)
             {
                 if(visited[*iter]==0)
                 {
                     Q.push(*iter);
                     one[*iter]=one[u]+1;
                     visited[*iter]=1;
                 }
             }
         }

         memset(visited,0,sizeof(visited));
         memset(last,-1,sizeof(last));
         last[N-1]=0;
         Q.push(N-1);
         visited[N-1]=1;
         while(!Q.empty())
         {
             long long int u=Q.front();
             Q.pop();
             for(vector<long long int>::iterator iter=graph[u].begin();iter!=graph[u].end();iter++)
             {
                 if(visited[*iter]==0)
                 {
                     Q.push(*iter);
                     last[*iter]=last[u]+1;
                     visited[*iter]=1;
                 }
             }
         }

         for(i=0;i<N;i++)
         {
             if((one[i]+last[i])!=one[N-1])
                while(!graph[i].empty()) graph[i].pop_back();
         }

        for(i=0;i<N;i++)
        {
            for(vector<long long int> :: iterator iter=graph[i].begin();iter!=graph[i].end();iter++)
            {
                cout<<*iter+1<<" ";
            }
            cout<<endl;
        }






     }


     return 0;
 }
