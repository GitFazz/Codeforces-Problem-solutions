#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x,y,i,j,k,l,r;
    cin>>l>>r>>x>>y>>k;

    float ansl=l/y;
    float ansr=r/x;



    if(k<=ansr&&k>=ansl)cout<<"YES";
    else cout<<"NO";




    return 0;
}
