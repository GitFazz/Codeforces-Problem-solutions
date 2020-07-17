#include<stdio.h>
int or(int a, int b)
{
    if(a==0&&b==0)
        return 0;
    else return 1;
}
int xor(int a,int b)
{
    if(a==0&b==0)
         return 1;
    else return 0;
}
int and(int a,int b)
{
    if(a==1&&b==1)
        return 1;
    else return 0;
}
main()
{
   int a,b,c,d,p,q,r,s,t,u,ans;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   p=or(a,b);
   q=xor(c,d);
   r=and(b,c);
   s=or(d,a);
   t=and(p,q);
   u=xor(r,s);
   ans=or(t,u);
   printf("%d",ans);
}
