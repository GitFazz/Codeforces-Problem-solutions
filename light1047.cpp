#include<bits/stdc++.h>
using namespace std;

int N;
int dp[25][25];
int cost[25][25];
int mincostDP(int i,int c)
{
    if(dp[i][c]!=-1) return dp[i][c];
    else if(i>=0 && i<N)
    {
        int ret = 99999;
        if(c==0)
        {
            ret = min(ret,mincostDP(i+1,1)+cost[i][c]);
            ret = min(ret,mincostDP(i+1,2)+cost[i][c]);
        }
        if(c==1)
        {
           ret = min(ret,mincostDP(i+1,0)+cost[i][c]);
           ret = min(ret,mincostDP(i+1,2)+cost[i][c]);
        }
        if(c==2)
        {
            ret = min(ret,mincostDP(i+1,1)+cost[i][c]);
            ret = min(ret,mincostDP(i+1,0)+cost[i][c]);
        }

        dp[i][c] = ret;
        return dp[i][c];
    }
    else
        return 0;
}

int main()
{
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin >> N;
        for(int i=0;i<N;i++)
            for(int j=0;j<3;j++)
        {
            cin>> cost[i][j];
        }

        memset(dp,-1,sizeof(dp));

        int ans = min(mincostDP(0,0),mincostDP(0,1));
        ans = min(ans,mincostDP(0,2));

        cout << "Case "<<t<<": "<<ans << endl;
    }


    return 0;
}
