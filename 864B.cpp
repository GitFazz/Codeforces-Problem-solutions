#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,maxsize=0;
    map<char,int> cnt;
    cin>>n;
    while(n--)
    {
        char t;
        cin>>t;
        cnt[t]++;
        if(t>='A'&&t<='Z')cnt.clear();
        if(cnt.size()>maxsize)maxsize=cnt.size();
    }
    cout<<maxsize<<endl;

    return 0;
}
