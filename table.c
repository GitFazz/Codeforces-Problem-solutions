#include<stdio.h>
main()
{
    int a,b=0,n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=(m/2+1);i++)
    {
        if(m%i==0)
            {
                if(i<=n&&(m/i)<=n)
                    b++;
            }
    }
    printf("%d",b);
}
