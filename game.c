#include<stdio.h>
main()
{
    int i,a=0,d=0,h;
    char res[100000];
    scanf("%d%s",&h,&res);
    for(i=0;i<h;i++)
    {
        if(res[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(d>a)
        printf("Danik");
    else
        printf("Friendship");
}
