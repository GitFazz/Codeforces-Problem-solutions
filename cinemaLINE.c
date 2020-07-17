#include<stdio.h>
main()
{
    int n,i,c=0,a,b;
    scanf("%d",&n);
    int bill[n];
    scanf("%d",&bill[0]);
    if(bill[0]!=25)
        printf("NO");
    else{
            a=1;
            b=0;
        for(i=1;i<n;i++)
        {
            scanf("%d",&bill[i]);
            if(bill[i]==25)a++;
            else if(bill[i]==50)b++;
            if(bill[i]==25){
                a++;
            }
                else if(bill[i]==50){
                    if(a<1)c++;
                    else
                    {
                        a--;
                        b++;
                    }
                }

                       else if(bill[i]==100)
                    {
                        if(b<1&&a<1)c++;
                        if(b>1&&a<2)c++;
                        else if(a>=1&&b>=1){
                            a--;
                            b--;
                        }
                            else if(a>=3&&b<1){
                            a-=3;
                        }
                        }

                    }


        if(c==0)
            printf("YES");
        else printf("NO");
    }
    }



