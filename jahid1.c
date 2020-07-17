#include<stdio.h>
main()
{
    int a,b,i,j,k,c;
    int n[100][100];
    int out[100][100];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
            scanf("%d",&n[i][j]);
    }
    for(k=0;k<b;k++){
    for(i=0;i<a;i++)
    {
        for(j=a-1,c=0;j>=0,c<a;j--,c++)
            out[i][c]=n[j][i];
    }
    for(i=0;i<a;i++)
        for(j=0;j<a;j++)
        n[i][j]=out[i][j];

    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)printf("%d ",out[i][j]);
        printf("\n");
    }

}
