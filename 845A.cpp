#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,k,n,cnt=1,maxcnt=0;
    cin>>n;
    int a[2*n];
    for(i=0;i<2*n;i++)cin>>a[i];

    sort(a,a+n);

    for(i=0;i<2*n;i++)
    {

        if(a[i]==a[i+1])
        {
            cnt++;
        }
        else
            cnt=1;

        if(cnt>maxcnt)maxcnt=cnt;
    }

    if(maxcnt>n)cout<<"NO";
    else cout<<"YES";

    return 0;
}
