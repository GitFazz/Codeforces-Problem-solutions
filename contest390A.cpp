/*
  my BADASS logic :'(
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,countd=0,countx=0;
    char a[4][4];
        for(j=0;j<4;j++)scanf("%s",&a[j]);

    for(i=0;i<4;i++)
    {
        for(j=0;j<=1;j++)
        {
            countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i][j+1]=='x')countx++;
            if(a[i][j+2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i][j+1]=='.')countd++;
            if(a[i][j+2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }

        }
    }
      for(j=0;j<4;j++)
    {
        for(i=0;i<=1;i++)
        {
            countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j]=='x')countx++;
            if(a[i+2][j]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j]=='.')countd++;
            if(a[i+2][j]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }

        }
    }
        for(i=0,j=0;i<2,j<2;i++,j++)
        {
            countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j+1]=='x')countx++;
            if(a[i+2][j+2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j+1]=='.')countd++;
            if(a[i+2][j+2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }

        }

        for(i=0,j=3;i<2,j>1;i++,j--)
        {
            countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j-1]=='x')countx++;
            if(a[i+2][j-2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j-1]=='.')countd++;
            if(a[i+2][j-2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }

        }
        i=0;
        j=1;
         countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j+1]=='x')countx++;
            if(a[i+2][j+2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j+1]=='.')countd++;
            if(a[i+2][j+2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }
            i=1;
            j=0;
             countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j+1]=='x')countx++;
            if(a[i+2][j+2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j+1]=='.')countd++;
            if(a[i+2][j+2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }
            i=0;
            j=2;
            countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j-1]=='x')countx++;
            if(a[i+2][j-2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j-1]=='.')countd++;
            if(a[i+2][j-2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }
            i=1;
            j=3;
            countx=0;
            countd=0;
            if(a[i][j]=='x')countx++;
            if(a[i+1][j-1]=='x')countx++;
            if(a[i+2][j-2]=='x')countx++;
            if(a[i][j]=='.')countd++;
            if(a[i+1][j-1]=='.')countd++;
            if(a[i+2][j-2]=='.')countd++;
            if(countx==2&&countd==1)
            {
                printf("YES");
                return 0;
            }


    printf("NO");
    return 0;
}
