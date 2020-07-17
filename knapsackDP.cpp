#include<bits/stdc++.h>
using namespace std;

int knapsack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];

   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    int i,j,k,n,cost[1000],w[10000];
    cin>>k>>n;
    for(i=0;i<n;i++)cin>>w[i]>>cost[i];

    int ans=knapsack(k,w,cost,n);
    cout<<"Hey stupid robber, you can get "<<ans<<endl;
    }



    return 0;
}
