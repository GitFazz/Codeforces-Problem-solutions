#include<stdio.h>

int main()
{
    int w,test;
    scanf("%d",&w);

    test=w%2;

    if(test==0&&w>3)printf("YES");
    else printf("NO");

    return 0;
}
