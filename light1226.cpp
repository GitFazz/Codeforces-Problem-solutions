
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000005
#define MAXX 1000000007
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

/******************* E-faz **********^********/

lli slot[MAX];
lli fact[MAX];
lli dp[MAX];
lli N;
lli sum = 0;

lli inv(lli a, lli p=MAXX-2){
    if(!p)return 1;
    if(p%2)return (a*inv(a,p-1) )%MAXX;
    lli t = inv(a,p/2);
    return (t*t)%MAXX;
}

lli C(int n, int r){
    lli ret=fact[n];
    ret = (ret*inv(fact[r]) )%MAXX;
    ret = (ret*inv(fact[n-r]) )%MAXX;
    return ret;
}

void gen_fact()
{
    fact[0] = 1; fact[1] = 1;

    for(int i=2;i<=MAX;i++)
    {
        fact[i] = (i*fact[i-1]) % MAXX;
    }
}



lli way_count()
{
    dp[N] = 1;
    for(int i=N-1;i>=0;i--)
    {
        dp[i] *= ( dp[i+1]*C(sum-1,slot[i]-1) )%MAXX;
        // cout << "dp = " << C(sum-1,slot[i]-1) << " ";
        sum = sum - slot[i];
    }


    return dp[0];
}



int main(){
std::ios::sync_with_stdio(false);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    gen_fact();

    for(int t=1;t<=T;t++){
        cin>>N;

        for(int i=0;i<N;i++)
        {
            dp[i] = 1;
            cin >> slot[i];
            sum += slot[i];
        }

        cout <<"Case "<<t<<": "<< way_count() << endl;


    }



return 0;
}
