#include<stdio.h>
main()
{
    int s,n,i,j;
    int a[10000],b[10000];
    scanf("%d %d",&s,&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);
    while(1)
    {
       i=i%n;
       if(s>=a[i])
       {
           s=s+b[i];
           n--;
           for(j=i;j<n;j++)
           {
               a[j]=a[j+1];
           }
       }
       if(n==0){
        printf("YES");
        break;
       }
       int min=100000;
       for(i=0;i<n;i++)
       {
        if(a[i]<min)
            min=a[i];
       }
       if(s<min)
       {
           printf("NO");
           break;
       }

       i++;
    }

}
