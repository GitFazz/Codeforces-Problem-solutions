
#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
#define MAXX 1000000005
#define MIN -99999

typedef long long int lli;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int graph[20][20];
int n;
int dp[MAX];

/******************* E-faz ******************/
// bitmask dp problem

bool visited(int mask,int pos)
{
    if((mask & (1<<pos))== 0)
        return false;
    else
        return true;
}

int set_at(int mask, int pos)
{
    int ret = ( mask | (1<<pos) );
    return ret;
}


int min_cost(int mask)
{
    if( mask == ((1<<n)-1) ) return 0;

    if( dp[mask] != MAX ) return dp[mask];

    int mini = MAX;

    for(int i=0;i<n;i++) {
      if(visited(mask,i) == false){
        int cost = graph[i][i];

        for(int j=0;j<n;j++)
            if( (i!=j) && visited(mask,j))
                cost += graph[i][j];

        mini = min(mini,cost+min_cost( set_at(mask,i) ));

      }
    }

    dp[mask] = mini;
    return dp[mask];
}


int main(){
std::ios::sync_with_stdio(false);

     freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){

        cin>>n;
        int nn = (1<<n);
        for(int i=0;i<nn;i++)
        {
            dp[i] = MAX;
        }

        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cin>>graph[i][j];
                }
        }

        int sol = min_cost(0);

        cout << "Case "<<t<<": "<< sol << endl;

    }



return 0;
}
