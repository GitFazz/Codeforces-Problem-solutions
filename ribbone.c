#include<stdio.h>
main()
{
    int h,a,b,c,z,ans;
    scanf("%d%d%d%d",&h,&a,&b,&c);
    if(h%a==0)
        ans=h/a;
        else if((h%a)%b==0)
            ans=h/a+(h%a)/b;
        else
            ans=h/a+(h%a)/b+((h%a)&b)/c;
    printf("%d",ans);
}
