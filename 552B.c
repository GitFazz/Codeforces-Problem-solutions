#include<stdio.h>
long long int one(n)
{
    int ret=1,t,i;
    t=10;
    for(i=1;i<n;i++)
    {
        ret+=t;
        t*=10;
    }
    return ret;
}
main()
{
    long long int n,ans,i,j;
    scanf("%lld",&n);
        if(n==1000000000)
    {
        printf("%lld",10*(n+1)-one(10));
    return 0;
}
    for(i=1,j=1;i<=1000000000,j<=10;i*=10,j++)
    {
        if(n<i)
        {
            j--;
            printf("%lld",j*(n+1)-one(j));
            break;
        }
    }

}
