#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
    int a,n,l=-1,r,dis=0,max=0,i;
    char al[200];
    gets(al);
    al[strlen(al)]='A';
    for(i=0;i<=strlen(al);i++)
    {
        if(al[i]=='A'||al[i]=='E'||al[i]=='O'||al[i]=='U'||al[i]=='I'||al[i]=='Y')
        {
            dis=(i-l);
            l=i;
        }
        if(dis>max)max=dis;
    }
    printf("%d",max);
}
