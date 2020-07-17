#include<stdio.h>
main()
{
    int i,j,n,a,b;
    i=0;
    b=0;
    char name[200];
    scanf("%s",&name);
    while(name[i]!='\0')
    {
        a=0;
        for(j=0;j<i;j++)
        {
            if(name[i]==name[j])
                a++;
        }
        if(a==0)
            b++;
        i++;
    }
    if(b%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}
