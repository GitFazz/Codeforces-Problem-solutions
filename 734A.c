#include<stdio.h>
main()
{
    long long int a,b,c,i,j,min=1000000,max,ans=0;
     long long int n[4];
    for(i=0;i<4;i++)scanf("%lldd",&n[i]);
    for(i=0;i<4;i++)
    {
        if(i==1)continue;
        if(n[i]<min)min=n[i];
    }
    ans=(min*256);
    n[0]-=min;
    min=(n[0]<n[1])?n[0]:n[1];
    ans+=(min*32);
    printf("%lld",ans);
}
