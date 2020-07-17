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
    lli n,K,k;
    cin>>T;
    for(int t=1;t<=T;t++){

        cin >> n;
        K = 1;
        k = 1;
        for(int i=0;i<64;i++)
        {
            k *= 2;
            K += k;
            if( (n%K)==0 ){
                cout <<"---"<< n/K << endl;
                break;
            }
        }

    }



return 0;
}
