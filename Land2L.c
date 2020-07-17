#include<stdio.h>
main()
{
    int n,i,l,sl;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    l=num[0];
    sl=num[0];
    for(i=1;i<n;i++)
    {
        if(num[i]>sl&&num[i]>l){
            sl=l;
        l=num[i];
        }
        else if(num[i]>sl&&num[i]<l){
            sl=num[i];
        }
    }
        printf("%d %d",l,sl);

}
