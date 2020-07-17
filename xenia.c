#include<stdio.h>
main()
{
    int a,b,i,ans;
    scanf("%d%d",&a,&b);
    int task[100001];
    for(i=0;i<b;i++){
        scanf("%d",&task[i]);
    }


ans=task[0]-1;
for(i=0;i<b-1;i++){
     if(task[i+1]>task[i])
        ans=ans+(task[i+1]-task[i]);
     else if(task[i+1]<task[i])
        ans=ans+(a-(task[i]-task[i+1]));
}
printf("%d",ans);
}
