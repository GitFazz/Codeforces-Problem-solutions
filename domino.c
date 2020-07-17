#include<stdio.h>
main()
{
    int i,j,k,n,m,t;
    float ans=0;
    scanf("%d %d",&n,&k);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<(n-k+1);i++)
    {
        t=0;
        for(j=i;j<k+i;j++)
        {
            t+=num[j];
        }
        ans+=t;
    }
    printf("%f",ans/(n-k+1));
}
