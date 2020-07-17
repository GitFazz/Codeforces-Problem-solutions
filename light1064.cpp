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


lli power[50];
lli dp[100][1000];
int n,x;

void cal_power()
{
    for(int i=1;i<=25;i++)
    {
        power[i] = 1;
        for(int j=0;j<i;j++)
            power[i] *= 6;
    }
}

lli max_count(int cnt,int sum) {
   if(cnt == n)
   {
       if(sum >= x)
            return 1;
        else
            return 0;
   }


   if(dp[cnt][sum] != -1)
        return dp[cnt][sum];

   lli ret = 0;
   for(int i=1;i<=6;i++) {
        ret += max_count(cnt+1,sum+i);
   }

   dp[cnt][sum] = ret;
   return dp[cnt][sum];
}


int main(){
std::ios::sync_with_stdio(false);

    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cal_power();

    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>n>>x;
        memset(dp,-1,sizeof(dp));
        lli up =  max_count(0,0);
        lli down = power[n];
        lli gcd = __gcd(up,down);

        up = up/gcd;
        down = down/gcd;

        cout << "Case " << t << ": ";

        if(up==0)
            cout << 0;
        else if(down==1)
            cout << up;
        else
            cout << up << "/" << down;

        cout << endl;


    }



return 0;
}
