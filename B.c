#include<stdio.h>
main()
{
    int a,b,i,j,k;
    int x[2000];
    int y[2000];
    int test=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            if(y[i]==x[j])
            {
                for(k=0;k<b;k++){
                if(y[j]==y[k]&&k!=j)
                    if(x[k]==x[i])
                test++;
            }
        }
    }

}
if(test==b/3&&b%3==0)
    printf("YES");
else
    printf("NO");


}
