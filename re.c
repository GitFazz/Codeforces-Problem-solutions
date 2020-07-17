#include<stdio.h>

void rev(int ara[],int n,int i)
         {
             if(i<n){
            rev(ara,n,i+1);
             printf("%d ",ara[i]);
         }
         }

main()
{
    int i,a[5],b;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    rev(a,b,0);
    return 0;
}
