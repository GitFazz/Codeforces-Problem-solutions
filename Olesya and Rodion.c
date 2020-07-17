#include<stdio.h>
#include<math.h>
main()
{
    int n,a,c,i,m,l;
    c=0;
    scanf("%d%d",&n,&a);
    if(n%2==0){
    m=pow(10,n-1);
    l=pow(10,n)+1;
    }
    else{
        m=pow(10,n-1)+1;
    l=pow(10,n);
    }
    for(i=m;i<l;i++){
        if(i%a==0){
                c++;
            break;

            }    }
   if(c!=0)
    printf("%d",i);
   else
      printf("-1");

}

