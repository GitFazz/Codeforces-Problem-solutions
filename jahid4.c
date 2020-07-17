#include<stdio.h>
main()
{
    char a[100],b[100],c[100];
    int i,j,k,n;

    scanf("%s",a);
    scanf("%[^\n]",&b);

    scanf("%d",&n);
    for(i=0;i<=(n-1);i++)
    {
        printf("%c",a[i]);
    }
    printf("%s",b);
    j=n;
    while(a[j]!='\0')
    {
        printf("%c",a[j]);
        j++;
    }
}
