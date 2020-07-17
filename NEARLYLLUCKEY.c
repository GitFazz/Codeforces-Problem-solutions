#include<stdio.h>
main()
{
    int i=0,j=0;
    char num[100];
    scanf("%s",&num);
    while(num[i]!='\0')
    {
        if(num[i]=='4'||num[i]=='7')
            j++;
        i++;
    }
    if(j==4||j==7)
        printf("YES");
    else printf("NO");
}
