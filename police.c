#include<stdio.h>
main()
{
    int n,ans=0,i,j;
    int occ[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d",&occ[i]);
    }
    for(i=0;i<n;i++)
    {
        if(occ[i]==-1)
            ans++;
        else
            {
                j=i;
                while(occ[j]!=-1)
                {
                    i+=occ[j];
                    j++;
                    i++;
                }
                i--;
            }

    }

printf("%d",ans);
}
