#include<stdio.h>
main()
{
    int a,i;
    int coin[5];
    for(i=0;i<5;i++){
    scanf("%d",&coin[i]);
    }
    a=coin[0]+coin[1]+coin[2]+coin[3]+coin[4];
    if(a==0)
        printf("-1");
    else {
    if(a%5==0)
        printf("%d",a/5);
    else
        printf("-1");
    }

}
