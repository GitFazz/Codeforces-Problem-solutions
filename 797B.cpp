#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,t,k,i,j,sum=0,maxsum=-10000;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)scanf("%d",&num[i]);
    for(i=n-1;i>=0;i--)
    {
        sum+=num[i];
        if(sum>maxsum&&sum%2!=0)
        {
            maxsum=sum;
        }
    }
    printf("%d",maxsum);

    return 0;
}
