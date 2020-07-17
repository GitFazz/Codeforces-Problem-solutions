#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m,nm=10000,mm=10000,a,an[10],am[10];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>an[i];
        if(an[i]<nm)nm=an[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>am[i];
        if(am[i]<mm)mm=am[i];
    }
    sort(an,an+n);
    sort(am,am+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(an[i]==am[j])
            {
                cout<<an[i]<<endl;
                return 0;
            }
        }
    }
    cout<<min(nm,mm)<<(nm+mm)-min(nm,mm);
    return 0;
}
