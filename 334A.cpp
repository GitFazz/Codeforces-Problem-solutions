#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,b,n,cnt=1;
    cin>>n;
    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++){
                    a[j][i]=cnt;
                    cnt++;
        }
        for(j=0;j<i;j++){
            a[j][i]=cnt;
        cnt++;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }



    return 0;
}
