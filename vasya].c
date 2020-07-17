#include<stdio.h>
main()
{
    int n,i,j,max,min;
    int con[1005];
    scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&con[i]);
  }
  int count;
  count=1;
  if(n==1)
    printf("0");
  else {
  for(i=2;i<n;i++){
    min=con[i-1];
    max=con[i-1];
    for(j=i-1;j>=1;j--){
        if(con[j-1]>max)
            max=con[j-1];
    }
    for(j=i-1;j>=1;j--){
        if(con[j-1]<min)
            min=con[j-1];
    }

          if(con[i]>max||con[i]<min){
          count++;
          }
  }
  if(con[0]==con[1])
printf("%d",count-1);
else
    printf("%d",count);
  }
  }

