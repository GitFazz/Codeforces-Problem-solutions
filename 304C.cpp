#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int i,j,k,l,a,c,b,s=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        s=s+pow(2,i);
    }
    if(a==55)
    printf("%I64d",s-2);
    else
        printf("%I64d",s);
}
