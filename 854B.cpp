#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,i,j,d;

    cin>>n>>k;


    d=n-k;

    if(k==0||d==0)
    {

        cout<<"0 0";
        return  0;
           }

    if(d>=(2*k))
    {
        cout<<"1 "<<2*k;
    }
    else
    {
        cout<<"1 "<<d;
    }



    return 0;
}
