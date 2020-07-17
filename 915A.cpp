#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos,l,r;
    cin>>n>>pos>>l>>r;
    int ans = 0;

    if(l==1&&r==n) cout<<0;
    else if(l==1&&r!=n) {
        cout<<abs(pos-r) + 1 ;
    }
    else if(r==n&&l!=1) {
        cout<<abs(pos-l) + 1;
    }
    else if(r!=n&&l!=1) {
        if(pos<l) {
            cout<< (r-pos) + 2;
        }
        else if(pos>r) {
            cout<< (pos-l) + 2;
        }
        else {
            if(abs(pos-r)<abs(pos-l)) {
                cout<< abs(pos-r) + 2 + (r-l);
            }
            else cout<<abs(pos-l) + 2 + (r-l);
        }
    }

}
