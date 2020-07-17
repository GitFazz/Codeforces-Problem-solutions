#include<stdio.h>
#include<stdlib.h>
int comparefunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}


main()
{
    int i,n;
    int values[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&values[i]);
    qsort(values, n, sizeof(int),comparefunc);
    for(i=0;i<n;i++)
    {
        printf("%d ",values[i]);
    }
    printf("\n");
    return 0;
}
