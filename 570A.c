#include<stdio.h>
main()
{
    int n,m,i,j,max,indx=0,ans,test0;
    scanf("%d%d",&n,&m);
    int can[m][n];
    int ind[100];
    for(i=0;i<n;i++)ind[i]=0;
    for(i=0;i<m;i++)
    {
        test0=0;
        max=0;
       for(j=0;j<n;j++){
       scanf("%d",&can[i][j]);
       if(can[i][j]==0)
        test0++;
       if(can[i][j]>max)
       {
           max=can[i][j];
           indx=j;
       }
       }
        if(test0==n)
            ind[0]++;
        else
       ind[indx]++;
    }
    max=ind[0];
    ans=0;
    for(i=1;i<n;i++)
    {
        if(ind[i]>max)
        {
            max=ind[i];
            ans=i;
        }

    }
    printf("%d",ans+1);
}
