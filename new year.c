#include<stdio.h>
main()
{
    int n,k,i;
    int count;
    count=1;
    scanf("%d %d",&n,&k);
    while(k<=240){
        k+=count*5;
        count++;
    }
    if((count-2)>=n)
        printf("%d",n);
    else
    printf("%d",count-2);
}
