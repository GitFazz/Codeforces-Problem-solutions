#include<stdio.h>
void bubble(int r,int l,int real[])
{
    int i,j,t;
     for(i=l;i<=r;i++)
    {
        for(j=l;j<r;j++)
        {
            if(real[j]>real[j+1])
            {
                t=real[j];
                real[j]=real[j+1];
                real[j+1]=t;
            }
        }
    }
}
main()
{
    int n,l,r,i,j,t;
    scanf("%d%d%d",&n,&l,&r);
    int real[n];
    int unreal[n];
    l--;
    r--;
    for(i=0;i<n;i++)scanf("%d",&real[i]);
    for(i=0;i<n;i++)scanf("%d",&unreal[i]);
    if((r-l)<=n/2){
       bubble(r,l,real);
       bubble(r,l,unreal);
        for(i=l;i<=r;i++)
        {
            if(real[i]!=unreal[i])
            {
                printf("LIE");
                break;
            }
        }
        if(i==r+1)printf("TRUTH");
    }
    else
    {
        if(l==0&&r==n-1) {
            printf("TRUTH");
            goto end;
        }
        else {
        bubble(0,l-1,real);
        bubble(0,l-1,unreal);
        for(i=0;i<l-1;i++)
        {
              if(real[i]!=unreal[i])
            {
                printf("LIE");
                goto end;
            }

        }
        bubble(r+1,n-1,real);
        bubble(r+1,n-1,unreal);
        for(i=r+1;i<n;i++)
        {
                         if(real[i]!=unreal[i])
            {
                printf("LIE");
                goto end;
            }
        }
        if(i==n)printf("TRUTH");
        }
    }
    end:
        {

        }
    }




