#include<stdio.h>
main()
{
    int n,i=0,j=0,k=0,l=0,min,x;
    int a[5000],b[5000],c[5000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x==1){
            a[j]=i+1;
            j++;
        }
        else if(x==2){
            b[k]=i+1;
            k++;
        }
            else{
                c[l]=i+1;
                l++;
            }
        }
    min=(j<k)?j:k;
    min=(l<min)?l:min;
    printf("%d\n",min);
    for(i=0;i<min;i++)
    {
        printf("%d %d %d\n",a[i],b[i],c[i]);
    }
}
