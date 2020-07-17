#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,a,b,n,m,ans=0;
    vector<int> nv,mv;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        nv.push_back(k);
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>k;
        mv.push_back(k);
    }
   sort(nv.rbegin(),nv.rend());
   sort(mv.rbegin(),mv.rend());
    vector<int>::iterator in,im;
    for(in=nv.begin();in!=nv.end();in++)
    {

        for(im=mv.begin();im!=mv.end();im++)
        {
            if((*in==*im)||(*in-*im)==1||(*im-*in)==1)
            {
                ans++;
                mv.erase(im);
                break;
            }
        }
    }
    cout<<ans;

    return 0;
}
