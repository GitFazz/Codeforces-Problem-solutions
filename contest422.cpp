#include<bits/stdc++.h>
using namespace std;

long long int i,j,k,a,b,n;


 int main()
{
    cin>>n>>k;
    a=n/2;
    if(k>a)printf("0 0 %lld",n);
    else{
    for(i=a;i>=0;i--)
    {
        if(i%(k+1)==0)
        {
            b=i/(k+1);
            cout<<b<<" "<<b*k<<" "<<n-i<<endl;
            break;
        }
    }
    }

    return 0;
}
