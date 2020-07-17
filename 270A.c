#include<stdio.h>
main()
{
    int i,n;
    scanf("%d",&n);
    int angle[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&angle[i]);
        if(((360%(180-angle[i]))==0)&&((360/(180-angle[i]))>2))printf("YES\n");
        else printf("NO\n");
    }
}
