#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,f,l,i,j,k,cnt,a[10000];
    memset(a,0,sizeof(a));
    while(cin>>n>>h>>f>>l)
    {
        f--;
        for(i=0;i<n;i++) cin>>a[i];

        for(i=f;i<l;i++)
        {
            int cnt=0;
            for(j=i+1;j<i+h;j++)
            {
                if(a[j]>a[i])cnt++;
                else break;
            }
            if(cnt==0) cout<<1<<endl;
            else
            {
                cout<<cnt+1<<endl;
                for(k=0;k<cnt&&i<l;k++)
                    {
                        cout<<0<<" ";
                        i++;
                    }
            }
        }
        memset(a,0,sizeof(a));

    }

    return 0;
}
