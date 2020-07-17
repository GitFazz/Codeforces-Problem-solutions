#include<stdio.h>
main()
{
    long long int i,j,n,a,b,c;
    scanf("%llf%llf%llf",&a,&b,&c);
    if(a%c==0)
        i=0;
    else i=1;
    if(b%c==0)
        j=0;
    else j=1;
    printf("%lld",(a/c+i)*(b/c+j));

}
