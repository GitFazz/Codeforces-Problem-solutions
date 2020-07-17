#include<stdio.h>
main()
{
    int n,i;
    double sum;
    sum=0;
    int vol[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vol[i]);
        sum=sum+vol[i]/100.0;
    }
    printf("%lf",(sum/n)*100.0);

}
