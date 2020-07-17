#include<bits/stdc++.h>
using namespace std;


long long int i,j,k,n,a,b,d;

int main()
{
    cin>>n;
    for(i=0;i<n-1;i++)
    {

        cin>>a>>b;
        if(a==1||b==1)d++;

    }
    printf("%.6f",(float)(n-1)/d);


    return 0;
}
