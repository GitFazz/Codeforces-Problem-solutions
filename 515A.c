#include<stdio.h>
long long int abs(long long int n)
{
    if(n<0)
        return -n;
    else return n;
}
main()
{
    long long int a,b,s;
    scanf("%lld %lld %lld",&a,&b,&s);
    if(((abs(a)+abs(b))<=s)&&(s-(abs(a)+abs(b)))%2==0)printf("Yes");
    else printf("No");
}
