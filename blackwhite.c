#include<stdio.h>
main()
{
    int n,m,c,i,j;
    c=0;
    char col[200][200];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%s",&col[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(col[i][j]=='B'||col[i][j]=='W'||col[i][j]=='G')
                c++;
        }
    }
    if(c==(m*n))
        printf("#Black&White");
    else
        printf("#Color");
}
