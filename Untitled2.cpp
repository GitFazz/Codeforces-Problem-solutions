#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n],f[10000];
    memset(f,0,sizeof(f));
    for(int i=0;i<n;i++) {
        cin>>a[i];
        f[a[i]]++;
    }
    for(int i=0;i<=100000;i++) {
        if(f[i]%2==1) {
            cout<<"con";
            return 0;
        }
    }
}
