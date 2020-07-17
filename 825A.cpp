#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,i;
    cin>>n;
    char a[100];
    cin>>a;
    a[n]='0';

    for(i=0;i<=n;i++)
    {
        if(a[i]=='0')
        {
            cout<<cnt;
            cnt=-1;

        }
           cnt++;
    }


    return 0;
}
