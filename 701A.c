#include<stdio.h>
#include<stdlib.h>
int comparefunc(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
main()
{
    int n,i;
    scanf("%d",&n);
    int num[n],temp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        temp[i]=i+1;
    }
    qsort(num,n,sizeof(int),comparefunc);
    for(i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }

}
