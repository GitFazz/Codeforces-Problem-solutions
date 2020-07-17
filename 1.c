#include<stdio.h>
main()
{
    int a,b,ans=0;
    scanf("%d%d",&a,&b);
    while(1)
    {
        if(a>b)
            break;
        a=a*3;
        b=b*2;
        ans++;
    }
    printf("%d",ans);
}
