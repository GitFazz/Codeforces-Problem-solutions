#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,j,k,l,b,n,cnt=0,nonzero=0,t;
    int a[100][100];
    cin>>n;
    for(i=0;i<n;i++)for(j=0;j<n;j++)
    {
        cin>>a[i][j];
        if(a[i][j]>1)nonzero++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            t=a[i][j];
            if(t>1)
            {
                  for(k=0;k<n;k++)
                    for(l=0;l<n;l++)
                  {
                      if((a[k][j]+a[i][l])==t)
                      {
                          cnt++;
                          goto newt;
                      }

                  }
            }
            newt:
                {

                }
        }
    }
    if(cnt==nonzero)cout<<"Yes";
    else cout<<"No";

}
