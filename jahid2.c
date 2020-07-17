#include<stdio.h>
main()
{
    int n,i,j,k=0,di,count;
    int dia[100];
    char t;
    char word[100][127];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",&word[i]);

        for(i=0;i<n;i++)
        {
            di=k;
            count=0;
            for(j=0;j<n;j++)
            {
                if(word[i][k]==word[j][k])
                    count++;
            }
            if(count!=n)break;
            k++;

        }
        printf("%d",di);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-1;j++)
      {
          if(word[j][di]>word[j+1][di])
          {
              t=word[j+1][di];
              word[j+1][di]=word[j][di];
              word[j][di]=t;
          }
      }
  }




}
