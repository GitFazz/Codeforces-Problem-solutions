#include<stdio.h>
main()
{
    long long int t,i,j,sum,n,temp;
    scanf("%lld",&t);
    long long int num[t];
    for(i=0;i<t;i++)scanf("%lld",&num[i]);
    printf("%d",t);
    for(i=0;i<t;i++)
    {
        n=num[i];
        sum=(n*n+n)/2;
        temp=0;
        for(j=0;j<=n;j++)
        {
            if(pow(2,j)>n)break;

         temp+=pow(2,j);
        }
        printf("%lld\n",sum-2*temp);
    }
}
