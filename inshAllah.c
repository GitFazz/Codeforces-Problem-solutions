#include<stdio.h>
main()
{

    int i,j,n,a,b,c=0;
    scanf("%d",&n);
    int bill[n];
    for(i=0;i<n;i++)
        scanf("%d",&bill[i]);
        a=0;
        b=0;
        for(i=0;i<n;i++)
        {
            if(bill[i]==25) a++;
            else if(bill[i]==50)
            {
                if(a>0) {
                    a--;
                    b++;
                }
                else
                c++;

            }
            else if(bill[i]==100)
            {
              if(b>0&&a>0)
              {b--;
                a--;
                  }
                  else if(a>2)
                  {
                      a-=3;
                  }
                  else c++;
              }
            }


        if(c==0)printf("YES");
        else printf("NO");
}

