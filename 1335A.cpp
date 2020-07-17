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

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--){
        lli n;
        cin>>n;

        if(n%2==1)
        {
            cout << (n/2) << endl;
        }

        else
        {
            cout << (n-1)/2 << endl;
        }


    }



return 0;
}
