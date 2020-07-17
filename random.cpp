#include<bits/stdc++.h>
using namespace std;

int cig(int n,int k)
{
    if(n<k) return n;
    else
    {
        return n + cig(n/k,k);
    }
}

int main()
{
    int n,k;
    while(cin>>n>>k)
    {


        int ans = cig(n,k);
        cout << ans << endl;
    }


    return 0;
}
