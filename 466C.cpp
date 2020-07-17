#include<bits/stdc++.h>
using namespace std;

int i,j,n,sum,ans,k;
map<int,int> bal;
int main()
{
    cin>>n;

    while(n--) {
        scanf("%d",&k);
        sum+=k;
        bal[sum]++;
    }
    if(sum%3==0) {
        if(sum==0) {
            ans=bal[0]-1;
            cout<<(ans*(ans-1))/2<<endl;
        }
        else cout<<bal[(sum/3)*2]<<endl;
    }
    else
        cout<<0<<endl;

    return 0;
}
