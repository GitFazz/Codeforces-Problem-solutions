#include<stdio.h>
#include<math.h>
main()
{
    long long int n,a,b,i,j,k,t;
    float chck;
    long long int num[100000];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
       scanf("%lld",&num[i]);
       if(num[i]==1)printf("NO\n");
       else{
       chck=sqrt(num[i]);
       t=chck;
       if(t==chck)printf("YES\n");
       else printf("NO\n");
       }
    }
}
