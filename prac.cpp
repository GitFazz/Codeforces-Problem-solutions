#include<bits/stdc++.h>
using namespace std;
int i,j,k,c;
string a,b,ans;
int main()
{
    cin>>a>>b;
    while(a[j]!='\0')
    {
        if(a[j]==b[j])
        {
            ans+=a[j];
            j++;
        }
        else
        {
            if(c)ans+=a[j];
            else ans+=b[j];
            c=!c;
            j++;
        }

    }
    if(c) cout<<"impossible"<<endl;
    else cout<<ans<<endl;

    return 0;
}
