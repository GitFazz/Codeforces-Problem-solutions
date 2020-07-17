#include<bits/stdc++.h>
using namespace std;

int i,j,k,n,cnt;
char color[200];

int main()
{

    cin>>n>>k;
    cin>>color;
    sort(color,color+n);

    for(i=0;i<n;i++)
    {
        if(color[i]==color[i-1])cnt++;
        else cnt=1;

        if(cnt>k){

            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
}
