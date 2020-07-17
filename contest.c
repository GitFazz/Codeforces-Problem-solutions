#include<stdio.h>
main()
{
    int i,j,k,n,m,t=0;
    float ans=0;
    scanf("%d %d",&n,&k);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    if(n==k)
    {
        for(i=0;i<n;i++)ans+=num[i];
        printf("%f",ans);
        return 0;
    }
        if(n==1)
    {
        ans=num[0];
        printf("%f",ans);
        return 0;
    }
    for(i=0;i<k-1;i++)
    {
        ans+=(i+1)*(num[i]+num[n-i-1]);
    }
    for(i=k-1;i<=n-k;i++)
    {
        ans+=k*num[i];
    }
    printf("%f",ans/(n-k+1));
}
