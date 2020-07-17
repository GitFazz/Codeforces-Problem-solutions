#include<bits/stdc++.h>
using namespace std;

long long int a,b,n,i,j,k;

int main()
{
    cin>>n;

    while(n--)
    {
        cin>>a>>b;
        if(a==b)cout<<"="<<endl;
        else if(a>b)cout<<">"<<endl;
        else cout<<"<"<<endl;
    }


}
