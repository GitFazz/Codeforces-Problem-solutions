#include<stdio.h>
char min(char x)
{
    if(x=='9') return '0';
    else if(x=='8') return '1';
    else if(x=='7') return '2';
    else if(x=='6') return '3';
    else if(x=='5') return '4';
    else return x;

}
main()
{
    int i=1;
    char num[100];
    scanf("%s",&num);
    if(num[0]=='9')printf("9");
    else printf("%c",min(num[0]));
    while(num[i]!='\0')
    {
        printf("%c",min(num[i]));
        i++;
    }
}
