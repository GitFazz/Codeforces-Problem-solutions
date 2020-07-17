#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,len,a,b,k,nz=0,no=0;
    char n[100];
    scanf("%s",&n);
    scanf("%d",&k);
    len=strlen(n);
    for(i=len-1;i>=0;i--)
    {
        if(n[i]=='0')nz++;
        else no++;
        if(nz==k)break;
    }
    if(nz<k)
    {
        printf("%d",len-1);
        return 0;
    }

    printf("%d",no);


    return 0;
}
