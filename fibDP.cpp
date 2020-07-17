
#include<bits/stdc++.h>
using namespace std;
long long int dp[100000];

long long int fib(long long int n)
{
    if(dp[n]==-1)
    {
        if(n<=1)dp[n]=n;
        else dp[n]=fib(n-1)+fib(n-2);
    }
    else return dp[n];
}
int main()
{
    long long int a;
    cin>>a;
    memset(dp,-1,sizeof(dp));
    cout<<fib(a);

    return 0;
}
