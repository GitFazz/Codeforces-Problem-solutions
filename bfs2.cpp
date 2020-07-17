#include<bits/stdc++.h>
using namespace std;

int main()
{


    int i,j,k,n,x,y,edge;
    cin>>n>>edge;

    int mat[n][n],mi[n];

    memset(mat,0,sizeof(int)*n*n);
    memset(mi,0,sizeof(int)*n);

    for(i=0;i<edge;i++)
    {
        cin>>x>>y;
        mat[x-1][mi[x-1]]=y;
        mat[y-1][mi[x-1]]=x;
        mi[x-1]++;
    }






    for(i=0;i<n;i++)
    {
        cout<<i+1<<": ";

        for(j=0;j<n;j++)
    {
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}

