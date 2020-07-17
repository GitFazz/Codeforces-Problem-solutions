
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,a,b,x,n,m;
    cin>>t;

    while(t--)
    {
        cin>>x>>n>>m;
        int num = x;
        for(int i=0;(i<n)&&(num>=20);i++)
        {
            num = (num/2) + 10;
        }

        if(m*10 >= num)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }




    return 0;
}

