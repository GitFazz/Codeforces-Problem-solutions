#include<stdio.h>
int md(int n)
{
    if(n<0)
        n=-n;
    return n;
}
main()
{
    int x1,y1,x2,y2,x3,x4,y3,y4,t;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(x1==x2)
    {
        x3=x1+md(y1-y2);
        y3=y1;
        x4=x2+md(y1-y2);
        y4=y2;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(y1==y2)
    {
        x3=x2;
        x4=x1;
        y3=y2+md(x1-x2);
        y4=y2+md(x1-x2);
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(md(x1-x2)==md(y1-y2))
    {
            if(x1>x2)
    {
        t=x2;
        x2=x1;
        x1=t;
    }
    if(y1>y2){
        t=y2;
        y2=y1;
        y1=t;
    }
        x3=x1+md(x1-x2);
        x4=x2-md(y1-y2);
        y3=y1;
        y4=y2;
        printf("%d %d %d %d",x3,y3,x4,y4);

    }
    else printf("-1");
}
