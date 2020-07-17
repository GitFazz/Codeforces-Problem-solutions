#include<stdio.h>
main()
{
    int n,ans,diff,i;
    ans=0;
    char one[1000];
    char two[1000];
    scanf("%d",&n);
    scanf("%s %s",&one,&two);
    for(i=0;i<n;i++){
        if(two[i]>=one[i])
            diff=(two[i]-one[i])<=(10-(two[i]-one[i]))?(two[i]-one[i]):10-(two[i]-one[i]);
        else
          diff=(one[i]-two[i])<=(10-(one[i]-two[i]))?(one[i]-two[i]):10-(one[i]-two[i]);
          ans+=diff;
}
printf("%d",ans);
}
