#include<stdio.h>
   char *mysubstr(char *str,int a,int b)
   {
       char *newstr=((char*)malloc(sizeof(char*(b-a+1)));
       char *ret;
       ret=newstr;
       int i=0;
       while(i<a)
       {
           str++;
           i++;
       }
       i=0;
       while(i<=(b-a))
       {
           newstr=str;
           newstr++;
           str++;
           i++;
       }
       newstr='\0';
       return ret;
   }
main()
{
    char a[100],i,j;
    gets(a);
    scanf("%d%d",&i,&j);
    printf("%s",mysubstr(a,i,j));
}
