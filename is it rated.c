#include<stdio.h>
main()
{
    int n,i,diff=0,ord=0;
    scanf("%d",&n);
    int b[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&b[i],&a[i]);
        if(b[i]!=a[i])diff++;
        if(i>0)
        {
            if(a[i+1]>a[i])ord++;
        }
    }
    if(diff==0&&ord!=0)printf("maybe");
    if(diff==0)printf("unrated");
    else printf("rated");
}
