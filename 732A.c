#include<stdio.h>
main()
{
   long long int a,b,i=1,j,k;
   scanf("%lld%lld",&a,&b);
   for(;;)
   {
       if((a*i)%10==0||(a*i-b)%10==0)
         break;
         i++;
   }
   printf("%lld",i);
}
