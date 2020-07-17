#include<stdio.h>
main()
{
    int s,n,i,j,minind,min,count=0;
    int a[10000],b[10000];
    scanf("%d %d",&s,&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);

    while(1){
             min=100000;
        for(i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                minind=i;
            }
        }
    a[minind]=100000;
        if(s>min){
            s+=b[minind];
            count++;
        }
        if(count==n)
        {
            printf("YES");
            break;
        }
        if(min==100000){
            printf("NO");
            break;
        }
    }
}
