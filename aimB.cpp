#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,n,m,ans,zero;
int a[100][100];

int main()
{
    cin>>n>>m;

    for(i=0;i<n;i++){
            zero=0;
        for(j=0;j<m;j++){
              cin>>a[i][j];
              if(a[i][j]==0)zero++;
        }

        ans+=(pow(2,zero)-1)+(pow(2,m-zero)-1);

    }


    for(i=0;i<m;i++){
        zero=0;

        for(j=0;j<n ;j++)
    {
        if(a[j][i]==0)zero++;
    }
     ans+=(pow(2,zero)-1)+(pow(2,n-zero)-1)-n;



    }

    cout<<ans;


    return 0;
}
