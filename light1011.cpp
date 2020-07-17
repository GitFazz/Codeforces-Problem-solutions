#include<bits/stdc++.h>
using namespace std;

#define MAX 16
#define MAXX 1000000005
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

lli N;
lli graph[MAX][MAX];
lli dp[100000];

/******************* E-faz ******************/

int Set(int N,int pos){return ( N | (1<<pos) );}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

lli max_count(int mask)
{

    if( ((1<<N)-1) == mask ) return 0;

    if(dp[mask] != -1) return dp[mask];



    for(int i=0;i<N;i++)
    {

        for(int j=0;j<N;j++) {

            if( check(mask,j) == false )
            {
                dp[mask] = max(dp[mask],graph[i][j]+ max_count( Set(mask,j) ) );

            }

        }



    }


        return dp[mask];


}



int main(){
std::ios::sync_with_stdio(false);

     freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){

        cin>>N;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>graph[i][j];
            }
        }

        lli sol = max_count(0);

        cout << "Case " << t << ": ";
        cout << sol;
        cout << endl;
    }



return 0;
}


