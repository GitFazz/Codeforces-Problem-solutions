#include<stdio.h>
long long int ncr(long long int n,long long int r)
{
    long long int ans=1,j=1,i;
    for(i=0;i<r;i++)
    {
        ans*=n;
        ans/=j;
        n--;
        j++;
    }
    return ans;
}
main()
{
    long long int a,b,i,j,k,ans,t,min,max;
    scanf("%lld%lld",&a,&b);
    k=a-b+1;
    max=ncr(k,2);
    t=a/b;
    k=(a%b)+t;
    min=(b-1)*ncr(t,2)+ncr(k,2);
    printf("%lld %lld",min,max);

}
