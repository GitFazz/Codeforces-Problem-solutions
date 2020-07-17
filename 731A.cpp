#include<bits/stdc++.h>
using namespace std;

int i,j,k,b,n,sum;
char t='a';
char a[105];

int main()
{
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {

        sum+=min(abs(a[i]-t),26-abs(a[i]-t));
        t=a[i];

    }
    cout<<sum<<endl;


    return 0;
}
