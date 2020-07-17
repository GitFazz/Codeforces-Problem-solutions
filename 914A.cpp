#include<bits/stdc++.h>
using namespace std;

bool isPerfect(long long int n) {
  if(n<0) return false;
long long int temp = n;

n = sqrt(n);
n = n*n;
if(n==temp) return true;
return false;

}

int main() {
    long long int i, n,maxt = -1,t;
    cin>>n;
    map<long long int ,long long int> cnt;
    for(i=0;i<n;i++) {
        cin>>t;
        cnt[t]++;
        maxt = max(maxt,t);
    }

    if(cnt[maxt]%2==0) cout<<"Agasa";
    else cout<<"Conan";

   return 0;
}
