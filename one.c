#include<stdio.h>
main()
{
    long long int n,x,i;
    int c=0;
    scanf("%lld%lld",&n,&x);
    for(i=1;i<=n;i++)
    {
            if(x%i==0&&(x/i)<=n)
           c++;
    }
    printf("%d",c);
}
