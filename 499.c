#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    int i,j,k,a,b;
    scanf("%d%d",&a,&b);
    char one[b][3000],two[b][3000],lec[a][3000];
    for(i=0;i<b;i++)
    {
        scanf("%s",&one[i]);
        scanf("%s",&two[i]);
    }
    for(i=0;i<a;i++)scanf("%s",&lec[i]);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(strcmp(lec[i],one[j])==0)
            {
                if(strlen(two[j])>=strlen(one[j]))
                   printf("%s ",one[j]);
                   else printf("%s ",two[j]);
            }
        }
    }

}
