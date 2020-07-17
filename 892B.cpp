#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0,last;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    last=n;
    for(int i=n-1;i>=0;i--)
    {
        if(i<last){
            ans++;
            last = i;
        }
        int j=i-a[i];
        if(j<last) last=j;
    }
    cout<< ans;

    return 0;
}
