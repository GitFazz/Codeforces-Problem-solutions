#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,t;
    cin>>n;
    vector<int> a;

    for(i=0;i<n;i++)
    {
        cin>>t;
        a.push_back(t);
            }
    sort(a.begin(),a.end());

    do
    {
        printf("%d %d %d\n",a[0],a[1],a[2]);
    }while(next_permutation(a.begin(),a.end()));
    return 0;
}
