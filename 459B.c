#include<stdio.h>
main()
{
    long long int i,j,k,n,max=0,min=1000000001,d,t,count=0,nmin=0,nmax=0;
    scanf("%lld",&n);
    long long int bn[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&bn[i]);
        if(bn[i]>max)max=bn[i];
        if(bn[i]<min)min=bn[i];
    }
    for(i=0;i<n;i++)
    {
       if(bn[i]==min)nmin++;
       if(bn[i]==max)nmax++;
    }
    d=max-min;
    if(min==max)
    {
        count=(n-1)*n/2;
    }
    else
        count=nmin*nmax;
    printf("%lld %lld",d,count);
}
