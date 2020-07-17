#include<stdio.h>
int f_term(int n)
{
    if(n==1||n==2)
        return 1;
    return f_term(n-1)+f_term(n-2);
}


main()
    {
        int n,i;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        printf("\n\n\n\n\n%d\n",f_term(i));
    }
