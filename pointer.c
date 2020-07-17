#include<stdio.h>
#include<stdlib.h>

int main()
{

    int i;
    char *str1="modhu";
    char *str2="ra";

    char *str;
    str=(char*)malloc(100);

    for(i=0;*str1;i++){
        *(str+i) = *str1++;
        //str1++;
        //str++;
    }
    *(str+i)='\0';




    printf(str);


    return 0;
}
