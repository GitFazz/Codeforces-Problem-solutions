#include<stdio.h>
main()
{
    int p,q,i,j,n,count=0,total=0,nowx,nowy,ans=0;
    scanf("%d%d",&p,&q);
    int  cor[p][q];
    char t[q];
    nowy=p-1;
    nowx=0;
    for(i=0;i<p;i++)
    {
       scanf("%s",&t);
        for(j=0;j<q;j++)
        {
            if(t[j]=='J')cor[i][j]=1;
            else cor[i][j]=0;
            if(cor[i][j]==1)total++;

        }
    }
    while(1)
    {
        for(i=q-1;i>=nowx;i--)
        {
            if(cor[nowy][i]==1){
                ans+=(i-nowx)+1;
                nowy--;
                nowx=i;
                break;
            }
        }
        if(nowy<0)break;
        for(i=0;i<=nowx;i++)
        {
            if(cor[nowy][i]==1)
            {
                ans+=(nowx-i)+1;
                nowy--;
                nowx=i;
                break;
            }
        }
        if(nowy<0)break;

    }


    printf("%d",ans);
}
