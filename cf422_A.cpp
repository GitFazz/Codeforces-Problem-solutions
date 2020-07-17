#include<bits/stdc++.h>
using namespace std;

long long int a,b,ans,i,j,k;

long  long int fuck_fact(long long int n)
{
    if (n >= 1)
        return n*fuck_fact(n-1);
    else
        return 1;
}

int main()
{
    cin>>a>>b;

    if(a>b)
        cout<<fuck_fact(b)<<endl;
    else
        cout<<fuck_fact(a)<<endl;


    return 0;
}
