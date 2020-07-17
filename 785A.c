#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    int n,i,j,k,t,sum=0;
    scanf("%d",&n);
    char **name = (char **)malloc(n* sizeof(char*));
    for (i=0; i<n; i++){
         name[i] = (char *)malloc(15*sizeof(char));
    }

    for(i=0;i<n;i++)

    {
        scanf("%s",name[i]);
        if(name[i][0]=='T')sum+=4;
        else if(name[i][0]=='C')sum+=6;
        else if(name[i][0]=='O')sum+=8;
        else if(name[i][0]=='D')sum+=12;
        else if(name[i][0]=='I')sum+=20;
    }
    printf("%d",sum);



}
