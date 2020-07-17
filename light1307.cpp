#include<bits/stdc++.h>
using namespace std;

#define MAX 16
#define MAXX 1000000005
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

lli h[MAX];
lli N;
int graph[MAX][MAX];
lli dp[100000];
lli power;

/******************* E-faz ******************/

int Set(int N,int pos){return ( N | (1<<pos) );}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}


lli min_count(int mask)
{

    if( ((1<<N)-1) == mask ) return 0;

    if(dp[mask] != -1) return dp[mask];

    lli minret = MAXX;

    for(int i=0;i<N;i++)
    {
        if( check(mask,i) == false )
        {
                for(int j=0;j<N;j++){
                    if(check(mask,j) && graph[j][i] > 0) {

                        power = graph[j][i];
                        lli add = (h[i]/power);

                        if(h[i]%power!=0)
                            add++;

                      //  cout << "helth = " << h[i] << " power = " << power << " inc = " << add << endl;

                       lli ret = add + min_count( Set(mask,i) );

                       minret = min(ret,minret);
                    }
               }

               lli ret = h[i] + min_count( Set(mask,i) );

               minret = min(ret,minret);

        }
    }

    dp[mask] = minret;
    return minret;

}


int main(){
std::ios::sync_with_stdio(false);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){

        cin>>N;

        memset(dp,-1,sizeof(dp));

        for(int i=0;i<N;i++)
            cin>>h[i];

        for(int i=0;i<N;i++)
        {
            string s;
            cin>>s;

            for(int j=0;j<N;j++)
            {
                graph[i][j] = (int)(s[j] - '0');
                if(graph[i][j]==0)
                    graph[i][j] = 1;
            }
        }


        lli sol =  min_count( 0 );



        cout << "Case " << t << ": ";
        cout << sol;
        cout << endl;
    }



return 0;
}
