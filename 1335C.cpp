#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
#define MAXX 1000000005
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

/*******************Main Code******************/


int main(){
std::ios::sync_with_stdio(false);

     //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

        int t,x,in;
        cin>>t;
        while(t--) {
            int n; cin>> n;
            vector<int> cnt(n+1);

            for(int i=0;i<n;i++)
            {
                cin >> in;
                cnt[in]++;
            }

            int fnd = *max_element(cnt.begin(),cnt.end());
            int dist = n + 1 - count(cnt.begin(),cnt.end(),0);

            cout << max( min(fnd-1,dist) , min(fnd, dist-1) ) << endl;
        }




   return 0;
}
