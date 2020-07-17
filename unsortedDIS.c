#include<stdio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(num[i]==num[j])
            {
                n--;
                break;
            }
        }
    }
    printf("%d",n);

}
