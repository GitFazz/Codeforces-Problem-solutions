#include<stdio.h>
#include<string.h>
void shift(char is[],char was[],char str[],int idx)
{
    int lis=strlen(is);
    int lwas=strlen(was);
    int lstr=strlen(str);
      int i,j,k,d;
    if(lis>lwas)
    {
        d=lis-lwas;

        for(i=lstr-1;i>=(lis+idx);i--)
        {
            str[i+d]=str[i];
        }
        for(i=idx;i<idx+lwas;i++)
        {
            str[i]=was[i-idx];
        }
    }
    else if(lwas>lis)
    {
        d=lwas-lis;
        for(i=idx+d;i<lstr;i++)
            {
                str[i-d]=str[i];
            }
                    for(i=idx;i<idx+lwas;i++)
        {
            str[i]=was[i-idx];
        }
    }

    printf("%s",str);
}
main()
{
    shift("gl","glad","bangladesh",3);
}
