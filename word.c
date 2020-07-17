#include<stdio.h>
#include<string.h>
main(){
char word[102],a[102],b[102];
int i,one=0,two=0;
scanf("%s",&word);
for(i=0;i<strlen(word);i++){
    a[i]=toupper(word[i]);
    b[i]=tolower(word[i]);
    if(word[i]==toupper(word[i]))
        one++;
    if(word[i]==tolower(word[i]))
        two++;

}
    a[strlen(word)]='\0';
    b[strlen(word)]='\0';
    if(one>two)
        printf("%s",a);
    else
        printf("%s",b);

}

