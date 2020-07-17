#include<stdio.h>
main()
{
    int n,i,r;
    scanf("%d",&r);
    scanf("%d",&n);
    int num[n],nums[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
       nums[(i+r)%n]=num[i];
    }
    for(i=0;i<n;i++)
        printf("%d ",nums[i]);
}
