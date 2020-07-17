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

     freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        lli a,b,q,hi,lo;
        cin>>a>>b>>q;
        lli ab = a*b;
        lli pref[ab+1];
        pref[0] = 0;

        for(lli i=1;i<=ab;i++)
        {
            if ( ((i%a)%b) != ((i%b)%a) )
                pref[i] = pref[i-1] + 1;
            else
                pref[i] = pref[i-1];
        }

        while(q--)
        {
            cin>>lo>>hi;
            lo--;

            lli lorem = lo%ab;
            lli lo_div = lo/ab;

            lli low = lo_div*pref[ab];
            low += (pref[lorem]);


            lli hirem = hi%ab;
            lli hi_div = hi/ab;

            lli high = hi_div*pref[ab];
            high += (pref[hirem]);

            cout << high - low << " ";
        }
        cout << endl;

    }



return 0;
}

