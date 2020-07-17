#include<bits/stdc++.h>
using namespace std;

int knapsack(int maxw,int n,int w[],int cost[])
{
    int i,j;
    int dp[n+1][maxw+1];

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=maxw;j++)
        {
            if(i==0||j==0)dp[i][j]=0;
            else if(w[i-1]>maxw) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(cost[i-1]+dp[i-1][j-w[i-1]], dp[i-1][j]);
        }
    }
    return dp[n][maxw];
}

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int k,m;
        cin>>k>>m;
        int cost[m+5],w[m+5];
        for(int i=0;i<m;i++)cin>>w[i]>>cost[i];
        int ans = knapsack(k,m,w,cost);
        cout<<"Hey stupid robber, you can get "<<ans<<endl;
    }
    return 0;
}
