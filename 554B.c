#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,a,b,max=0,count,n;
    scanf("%d",&n);
    char num[200][200];
    for(i=0;i<n;i++)scanf("%s",&num[i]);
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(strcmp(num[i],num[j])==0)count++;
        }
        if(count>max)max=count;
    }
    printf("%d",max);

}
