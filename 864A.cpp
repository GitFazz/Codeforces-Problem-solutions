#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    map<int,int> cnt;
    while(n--){
        int t;
        cin>>t;
        cnt[t]++;
    }
    if(cnt.size()==2)
    {
        if((cnt.begin()->second)==((++cnt.begin())->second))
        {
            cout<<"YES"<<endl;
            cout<<cnt.begin()->first<<" "<<(++cnt.begin())->first;
        }
        else cout<<"NO";
    }
    else cout<<"NO";

    return 0;
}
