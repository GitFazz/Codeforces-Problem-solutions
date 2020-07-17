#include<stdio.h>
 void rev(int i,int j,int* n,int* a)
 {
        if(a[i]%2==0)a[j++]=a[i];
        if(i==*n-1)
        {
            *n=j;
            return;
        }
        rev(i+1,j,n,a);
 }

main()
{
    int i,j,a[10],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    rev(0,0,&n,a);
    printf("new n= %d",n);
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;
}
