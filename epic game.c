#include<stdio.h>
int gcd(int one, int two){
    int i, big,ans;
    if(one>two)
    big=one;
    else
    big=two;
    if(one==0||two==0)
        return ans=0;
    else{    for(i=big;i>=1;i--){
        ans=i;
        if(one%i==0&&two%i==0)
        break;
    }
    return ans;
    }
}
main()
{
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    while(1){
    if(gcd(a,n)!=0)
    {
        n=n-gcd(a,n);
        if(gcd(b,n)!=0)
        {
            n=n-gcd(b,n);
        }
        else {printf("0");
        break;
        }
    }
    else
    {
        printf("1");
        break;
    }
}
}

