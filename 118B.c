#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=(n-i)*2-1;j>=0;j--)printf(" ");
        for(j=0;j<=i;j++){
                if(i==0)printf("0");
        else
            printf("%d ",j);
        }
        for(j=i-1;j>=0;j--)
        {
            if(j==0)
                printf("0");
            else
            printf("%d ",j);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=2*i+1;j++)printf(" ");
        for(j=0;j<=(n-i-1);j++)
        {
            if((n-i-1)==0)printf("0");
            else
            printf("%d ",j);
        }
        for(j=(n-i-2);j>=0;j--)
        {
            if(j==0)printf("0");
            else
            printf("%d ",j);
        }

        printf("\n");
    }
}
