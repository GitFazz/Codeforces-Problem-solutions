#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c)
    {
        cout<<abs(b-d)*2+6;
    }
    else if(b==d)
    {
        cout<<abs(a-c)*2+6;
    }
    else
    {
        cout<<2*abs(a-c)+2*abs(b-d)+4;
    }

    return 0;
}
