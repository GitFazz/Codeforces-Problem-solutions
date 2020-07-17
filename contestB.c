#include<stdio.h>
long long int modd(long long int n)
{
    if(n<0)return -n;
    else return n;
}
main()
{
    long long int i,j,a,b,k=0,min,n;
    scanf("%lld",&n);
    long long int num[n];
    long long int z[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num[i]);
        if(num[i]==0)
        {
            z[k]=i;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(num[i]==0)
            printf("0 ");
        else
        {
            min=1000000000;
            for(j=0;j<k;j++)
            {
                if(modd(z[j]-i)<min)min=modd(z[j]-i);
            }
            printf("%lld ",min);
        }
    }
}
