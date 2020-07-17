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
    cin>>T;
    for(int t=1;t<=T;t++){
        string s;
        cin>>s;
        bool flag = false;

        for(int i=1;i<s.length();i++)
        {
            if(s[i] != s[i-1])
                flag = true;
        }

        if(flag)
        {
            for(int i=0;i<s.length();i++)
            {
                cout << "10";
            }
        }
        else
            cout << s;

        cout << endl;

    }



return 0;
}

