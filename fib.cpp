#include<bits/stdc++.h>
using namespace std;
long long int fib(long long int n)
{
    if(n<=1)return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    long long int a;
    cin>>a;
    cout<<fib(a);

    return 0;
}
