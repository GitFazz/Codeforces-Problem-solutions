#include<stdio.h>
main()
{
    int n,i;
    while(scanf("%d",&n)){
     if(n%2==0)
     for(i=0;i<(n/2);i++){
        printf("1");
     }
        else
        {
            printf("7");
            for(i=0;i<(n-3)/2;i++)
                printf("1");
        }
     }
}

