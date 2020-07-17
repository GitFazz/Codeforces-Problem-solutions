#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    int ans = 0;
    if(abs(r-pos)>abs(l-pos)) {
    if(l!=1) {
            ans++;
            ans += abs(pos-l);
            pos = l;
    }
    if(r!=n) {
        ans++;
        ans += (r-pos);
    }
    cout<<ans;
    return 0;
    }
    else
    {
    if(r!=n) {
        ans++;
        ans += abs(r-pos);
        pos = r;
    }
            if(l!=1) {
            ans++;
            ans += (pos-l);
    }
    cout<<ans;
    return 0;

    }





    return 0;
}
