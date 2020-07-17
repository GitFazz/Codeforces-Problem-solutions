#include<stdio.h>
main()
{
    long long int a,b,n,x,mask,count=0;
    scanf("%lld",&x);
    mask=1;
    while(mask!=0){
    if((mask&x)!=0)count++;
    mask=mask<<1;
    }
    printf("%lld",count);
}
