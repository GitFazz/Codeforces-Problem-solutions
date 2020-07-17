#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,k,m,n,flag=1;
    cin>>n>>m;
    char grid[101][101];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(flag==1)
            {
                flag=2;
                grid[i][j]='B';
            }
            else
            {
                flag=1;
                grid[i][j]='W';
            }
        }
        if(m%2==0){
        if(flag==1)flag=2;
        else flag=1;
        }

    }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
        {
          char t;
          cin>>t;
          if(t=='-')grid[i][j]='-';
        }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    return 0;
}
