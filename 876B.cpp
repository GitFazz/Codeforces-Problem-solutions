#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,m,cnt=0;
    bool flag=true;
    cin>>n>>k>>m;
    long long int a[n];
    vector<long long int> V;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]-a[j])%m==0)
            {
                if(flag){flag=false;V.push_back(a[i]);}
                cnt++;
                V.push_back(a[j]);
            }
        }
        cout<<V.size()<<endl;
        if(cnt!=0){
        if(cnt>=(k-1))
        {
            cout<<"Yes"<<endl;
            for(j=0;j<k;j++)printf("%lld ",V[j]);
            return 0;
        }
        else
        {
            cout<<"No"<<endl;
            return 0;
        }
        }

    }
    cout<<"No"<<endl;

    return 0;
}
