#include<stdio.h>
main()
{
    int n,m,ans=0,t,i,count=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        if(count==m)break;
        scanf("%d",&t);
        {
            if(t<0)ans-=t;
            count++;
        }
    }
    printf("%d",ans);
}
