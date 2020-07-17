#include<stdio.h>
int com(int a,int b)
{
    int i , ans=1;
    if(a==0||b==a||b==0)
        return ans;
    else{
    for(i=1;i<=b;i++)
    {
        ans=ans*(a/i);
        a=a-1;
            }
            return ans;
    }
}
main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=(n-i);j++)
            printf(" ");
        for(j=0;j<=i;j++){
            printf("%d ",com(i,j));
        }
        printf("\n");
    }
}
