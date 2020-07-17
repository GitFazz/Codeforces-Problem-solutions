#include<stdio.h>
#include<string.h>
main()
{
    int a,b,i,n;
    char x[200],z[200],y[200];
    scanf("%s",&x);
    scanf("%s",&z);
    n=strlen(x);
    for(i=0;i<n;i++)
    {
        if((x[i]==z[i]&&x[i]=='z')||(x[i]!=z[i]&&x[i]=='a'))
           {
               printf("-1");
               goto end;
           }
        if(x[i]==z[i])y[i]='z';
        else if(x[i]!=z[i])y[i]=z[i];
    }
y[n]='\0';
printf("%s",y);
end:
    {

    }
}
