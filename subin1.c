#include<stdio.h>
main()
{
    int n,m,min;
    scanf("%d%d",&n,&m);
    min=(n<=m)?n:m;
    if(min%2==0)
        printf("Malvika");
    else printf("Akshat");
}
