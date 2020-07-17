#include<stdio.h>
main()
{
    int n,cost=0,max=0,i;
    scanf("%d",&n);
    int wel[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&wel[i]);
        if(wel[i]>max)max=wel[i];
    }
    for(i=0;i<n;i++)
    {
        cost+=(max-wel[i]);
    }
    printf("%d",cost);
}
