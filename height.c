#include<stdio.h>
main()
{
    int n,h,i,count;
    count=0;
    int fr[1000];
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&fr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(fr[i]>h)
            count++;
    }
    printf("%d",n+count);
}
