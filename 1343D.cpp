#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
#define MAXX 1000000005
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

/******************* E-faz ******************/



int main(){
std::ios::sync_with_stdio(false);

     //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<int> cnt(2 * k + 1),pref(2 * k + 2);

		for (int i = 0; i < n / 2; ++i) {
			++cnt[a[i] + a[n - i - 1]];
			int l1 = 1 + a[i], r1 = k + a[i];
			int l2 = 1 + a[n - i - 1], r2 = k + a[n - i - 1];
            ++pref[min(l1, l2)];
			--pref[max(r1, r2) + 1];
		}


		for (int i = 1; i <= 2 * k + 1; ++i) {
			pref[i] += pref[i - 1];
		}

		int ans = MAXX;

		for (int sum = 2; sum <= 2 * k; ++sum) {
			ans = min(ans, (pref[sum] - cnt[sum]) + (n / 2 - pref[sum]) * 2);
		}
		cout << ans << endl;

    }



return 0;
}
