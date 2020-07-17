#include<stdio.h>
main()
{
    int n,i,j,k,t;
    scanf("%d",&n);
    int rate[n],p[n],ans[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&rate[i]);
        p[i]=i;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(rate[j]<rate[j+1])
            {
                t=rate[j];
                rate[j]=rate[j+1];
                rate[j+1]=t;
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;

            }
        }
    }
     ans[p[0]]=1;
    for(i=1;i<n;i++)
    {
        if(rate[i]==rate[i-1])
            ans[p[i]]=ans[p[i-1]];
        else
        ans[p[i]]=i+1;
    }
    for(i=0;i<n;i++)printf("%d ",ans[i]);
}
