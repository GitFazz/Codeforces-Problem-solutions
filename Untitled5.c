#include<stdio.h>
#include<string.h>
main()
{
    int i,j,ans=0,n,count=0,maxcount=0;
    char vk[200];
    scanf("%s",&vk);
    n=strlen(vk);
            for(j=0;j<n-1;j++)
        {
            if(vk[j]=='V'&&vk[j+1]=='K')count++;
        }
        maxcount=count;
    for(i=0;i<n;i++){
            if(vk[i]=='V')vk[i]='K';
            else vk[i]='V';
        count=0;
        for(j=0;j<n-1;j++)
        {
            if(vk[j]=='V'&&vk[j+1]=='K')count++;
        }
        if(count>maxcount)maxcount=count;
    if(vk[i]=='V')vk[i]='K';
    else vk[i]='V';
    }
    printf("%d",maxcount);
}
