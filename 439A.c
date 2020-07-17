#include<stdio.h>
main()
{
    int n,d,s,sum=0,i;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s);
        sum+=s;
    }
    if((sum+(n-1)*10) <=d)printf("%d",(d-sum)/5);
    else printf("-1");

}
