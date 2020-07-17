#include<stdio.h>
main()
{
    unsigned int n;
    long long int i,j,sum=0,min=1000000000;
    scanf("%u",&n);
    long long int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%llu",&num[i]);
        sum+=num[i];
        if(num[i]<min&&num[i]%2!=0)
            min=num[i];
    }
    if(sum%2==0)printf("%llu",sum);
    else printf("%llu",sum-min);
}
