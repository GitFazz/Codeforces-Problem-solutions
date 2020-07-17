#include<bits/stdc++.h>
using namespace std;

long long int i,j,k,a,b,n,p,q;

int main()
{
    cin>>n;
    int prize[n];
    for(i=0;i<n;i++)cin>>prize[i];
    sort(prize,prize+n);
    cin>>p;
    long long int day[p];
    for(i=0;i<p;i++)cin>>day[i];
    for(i=0;i<p;i++)
    {
        b=0;
        for(j=0;j<n&&(prize[j]<=day[i]);j++)
        {
            b++;
        }
        cout<<b<<endl;

    }
    return 0;
}
