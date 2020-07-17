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

string str;
int dp[105][105];

int mis_match(int lo,int hi)
{
    if(hi-lo<=1) {
        if(str[hi]==str[lo])
            return 0;
        else return 1;
    }

    if(dp[lo][hi] != -1)
        return dp[lo][hi];

    int ret;
    if(str[hi]==str[lo])
        ret = mis_match(lo+1,hi-1);
    else
        ret = min( mis_match(lo+1,hi),mis_match(lo,hi-1) ) + 1;

    dp[lo][hi] = ret;
    return ret;

}


int main(){
std::ios::sync_with_stdio(false);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>str;
        memset(dp,-1,sizeof(dp));
        int ans = mis_match(0,str.size()-1);

        cout << "Case " << t << ": " << ans << endl;

    }



return 0;
}

