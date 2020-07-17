#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n,len;
    char song[1000];
    scanf("%s",&song);
    len=strlen(song);
    for(i=0;i<len;i++)
    {
       if(song[i]=='W'&&song[i+1]=='U'&&song[i+2]=='B')
       {
           i+=2;
           printf(" ");
       }
       else
        printf("%c",song[i]);
    }
}
