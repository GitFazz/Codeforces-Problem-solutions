#include<bits/stdc++.h>
using namespace std;
int a,b,ans,i,j,m;
int main()
{
    cin>>a>>b;
    if(a==0&&b==0)m=0;
    else m=((a<b)?a:b)+1;
    cout<<m<<endl;
    if(a==b&&a!=0)
    {
        cout<<a<<" 0"<<endl;
        for(i=0;i<a;i++)cout<<i<<" "<<i+1<<endl;
    }
    else if(a<b)
    for(i=0;i<=a;i++)
    {
       cout<<i<<" "<<i+1<<endl;
    }
    else for(i=0;i<=b;i++)cout<<i+1<<" "<<i<<endl;
    return 0;
}
