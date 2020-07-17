#include<bits/stdc++.h>
using namespace std;
long long int i,j,a,n,m,k,sum,x;


long long int func1(long long int x,long long int y)
{
    return ((x-1)*x)/2+y-(x-1);
}
long long int func2(long long int x,long long int y)
{
    return ((2*x-y-1)*y)/2;
}
int main()
{
    cin>>n>>m>>k;
    while(1)
    {
        x++;
        sum=((n-k)>(x-1))?func1(x,n-k):func2(x,n-k)+((k-1)>(x-1))?func1(x,k-1):func2(x,k-1);
        if(sum>n)break;
    }
    cout<<x;

    return 0;
}
