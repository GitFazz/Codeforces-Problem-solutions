#include<stdio.h>
#include<string.h>
main(){
char num[100];
scanf("%s",&num);
int len=strlen(num);
if(num[0]=='-')
{
    if(num[len-1]>num[len-2]){
        num[len-1]='\0';
        if(num[1]=='0')
            printf("0");
        else
        printf("%s",num);
    }
    else if(num[len-1]<=num[len-2]){
        num[len-2]=num[len-1];
        num[len-1]='\0';
        if(num[1]=='0')
            printf("0");
        else
        printf("%s",num);
    }


}
else
    printf("%s",num);

}
