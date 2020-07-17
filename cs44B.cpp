#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,j,k;

    cin>>n>>m;
    long long int mat[n][m];
    for(i=0;i<n;i++)

    {
        for(j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        sort(mat[i],mat[i]+m);
    }

    for(i=0;i<m;i++)
    {
        sort(mat[i],mat[i+n]);
    }


    for(i=0;i<n;i++)

    {
        for(j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
