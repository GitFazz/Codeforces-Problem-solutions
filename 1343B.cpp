
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

        lli T,n,i,j;
        cin>>T;
        for(int t=1;t<=T;t++){

            cin>>n;

            if(n%4 != 0)
            {
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            for(int i=1;i<=(n/2);i++)
            {
                cout << 2*i << " ";
            }
            for(i=1,j=n/2;i<(n/4),j>(n/4);i++,j--)
            {
                cout << 2*i - 1 << " " << 2*j + 1 << " ";
            }
            cout << endl;
        }



    return 0;
    }
