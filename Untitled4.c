#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1) return true;
    int i;
    for(i=2;i<n;i++)
    {
        if(n%2==0)return false;
    }
    return true;
}
int main()
{
    int n,i,k,k;
    scanf("%d",&n);
    if(n==1)
    {
        printf("1\n");
        printf("1");
        return 0;
    }
    else if(n==2)
    {
        printf("1\n");
        printf("1 1");
        return 0;
    }
    else
    {
        printf("2\n");
    for(i=2;i<=(n+1);i++)
    {
        if(isPrime(i)==true)printf("1");
        else printf("2");
    }
    }
    return 0;
}
