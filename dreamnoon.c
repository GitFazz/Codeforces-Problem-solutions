#include<stdio.h>
main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    i=(n%2==0)?n/2:(n/2)+1;
    if(n<m)
        printf("-1");
    else{
        while(i%m!=0)
        i++;

    printf("%d",i);
    }
}
