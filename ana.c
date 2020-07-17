#include<stdio.h>
#include<math.h>

int num_of_one(int n)
{
    int ans=0;
    while(n)
    {
        n=n&(n-1);
        ans++;
    }


    return ans;
}

int isSet(int n,int i)
{
    if((n&(1<<i))==0)return 0;
        else 1;


}



int reset(int i, int n)
{
 int   mask=(1<<i);
    mask=(-1)^(mask);
    return n&mask;


}

int main()
{
    int a=7;

    printf("%d",reset(5,16));


    return 0;
}
