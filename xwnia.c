#include<stdio.h>
main()
{
    int i,n,m,now=1,x;
    long long int count=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        if(x>now){
            count+=(x-now);
            now=x;
        }
        else if(now>x)
        {
            count+=(n-(now-x));
            now=x;
        }

    }
    printf("%lld",count);
}
