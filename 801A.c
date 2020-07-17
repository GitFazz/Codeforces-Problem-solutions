#include<stdio.h>
#include<string.h>
main()
{
    int i,j,ans=0,n,count=0;
    char vk[200];
    scanf("%s",&vk);
    n=strlen(vk);
    for(i=0;i<n-1;i++)
    {
       if(vk[i]=='V'&&vk[i+1]=='K')ans++;
    }
        if(n<3)
    {
        if(vk[0]==vk[1])count++;
    }
    else{
    for(i=0;i<n-1;i++)
        {
            if(vk[i]=='V'&&vk[i+1]=='V'&&vk[i+2]=='V'&&(i+2)!=n)
                count++;
            if(vk[i]=='K'&&vk[i+1]=='K'&&vk[i-1]=='K'&&i!=0)
                count++;
        }
    }
    if(count>0)printf("%d",ans+1);
    else printf("%d",ans);

}
