#include<bits/stdc++.h>
using namespace std;

long long int totDigit(long long int n)
    {
        long long int ret = 0;
        for(int i=1;i<=n;i*=10)
        {
            ret += (n-i+1);
            //cout << ret << endl;
        }

        return ret;
    }

int main()
{
    long long int T, k,n,p;
    cin>> T;
    while(T--)
    {
        long long int n,x;
        cin>>n>>x;
        long long int digitx = totDigit(x-1);
        long long int total = n+digitx;

      //cout << "total : " << total << endl;

        long long int hi = 9,lo = 1;
        long long int ans = 0;

        for(long long int d = 1;;d++)
        {

            long long int inRange = d*(hi-lo+1);
            if(inRange < total)
            {
                ans += hi-lo+1;
                total -= inRange;
                lo = lo*10;
                hi = (lo*10)-1;
            }
            else
            {
                if(total%d!=0){
                    cout << -1 << endl;
                    break;
            }
                ans += (total/d);
                cout << ans - x + 1 << endl;
                break;
            }
        }

    }




    return 0;
}
