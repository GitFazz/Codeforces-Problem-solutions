#include<stdio.h>
main()
{
    int n,i,j,t,flag=0;
    scanf("%d",&n);
    int p[n],q[n];
    for(i=0;i<n;i++)
        scanf("%d %d",&p[i],&q[i]);


    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            if(p[i]<p[j]&&q[i]>q[j])
            {
                printf("Happy Alex");
                flag=1;
                return 0;
            }
        }
    }
    printf("Poor Alex");
}
