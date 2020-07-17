#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);

long long int dis[n];
int i,j,k;
for(i=0;i<n;i++)
{
    scanf("%lld",&dis[i]);
}
printf("%lld %lld\n",dis[1]-dis[0],dis[n-1]-dis[0]);
for(i=1;i<n-1;i++)
{
    if((dis[i]-dis[i-1])<(dis[i+1]-dis[i]))printf("%lld",dis[i]-dis[i-1]);
    else printf("%lld",dis[i+1]-dis[i]);
    if((dis[i]-dis[0])>(dis[n-1]-dis[i]))printf(" %lld\n",dis[i]-dis[0]);
    else printf(" %lld\n",dis[n-1]-dis[i]);
}
printf("%lld %lld",dis[n-1]-dis[n-2],dis[n-1]-dis[0]);
}
