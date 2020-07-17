#include<stdio.h>
int abs(int n)
{
    if(n<0)
        n=-n;
    return n;
}
main()
{
    int n,m,k,i,j,ansind;
    scanf("%d%d%d",&n,&m,&k);
    int hou[n];
    for(i=0;i<n;i++)
    scanf("%d",&hou[i]);
    m--;
    i=m+1;
    j=m-1;
    while(1)
    {
        if(i<n&&hou[i]!=0&&hou[i]<=k)
        {
            ansind=i;
            break;
        }
        if(j>=0&&hou[j]!=0&&hou[j]<=k)
        {
            ansind=j;
            break;
        }
        i++;
        j--;
    }
    printf("%d",abs((m-ansind)*10));
}

