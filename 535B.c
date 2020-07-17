#include<stdio.h>
#include<math.h>
main()
{
    long long int n;
    int i=0,ans=0;
    scanf("%lld",&n);

    while(n)
    {
        if(n%10==7)
            ans+=(2*pow(2,i));
        else if(n%10==4)
            ans+=(1*pow(2,i));
        n=n/10;
        i++;
    }
    printf("%d",ans);
}
