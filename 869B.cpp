#include<bits/stdc++.h>
using namespace std;

int main(){
unsigned long long int i,j,k,a,b,ans=1;
cin>>a>>b;
if((b-a)>=5)cout<<0;
else
{
    for(i=a+1;i<=b;i++)
    {
        ans=(ans*i)%10;
    }
    cout<<ans;
}

}
