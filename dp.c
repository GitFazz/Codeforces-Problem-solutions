#include<stdio.h>
main()
{
    int n,i,j,sum=0,max=0;
    scanf("%d",&n);
    int w[1000];
    int h[1000];
    for(i=0;i<n;i++)
    {
    scanf("%d %d",&w[i],&h[i]);
    sum+=w[i];
    if(h[i]>max)
        max=h[i];
    }
    long long int x=sum*max;

    for(i=0;i<n;i++)
    {
     printf("%lld ",x/(h[i]*w[i]));

    }
}

