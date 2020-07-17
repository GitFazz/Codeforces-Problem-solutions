#include<stdio.h>
main()
{
    int i,j,k,a,b,n;
    int scr[200];
    b=0;
    scanf("%d%d",&n,&a);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scr[i]);
    }
    for(i=0;i<n;i++)
    {
        if((scr[i]>=scr[a-1])&&(scr[i]>0))
            b++;
    }
    printf("%d",b);
}
