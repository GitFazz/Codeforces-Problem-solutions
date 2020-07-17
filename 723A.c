#include<stdio.h>
main()
{
    int a[3];
    int i,j;

    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
    {
        if(a[j]>a[j+1])
        {
            int   t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    printf("%d",a[2]-a[0]);

}
