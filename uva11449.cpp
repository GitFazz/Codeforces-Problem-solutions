#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,b,h,w,cost,i;
    long long int a,ans,ansmin;
    while(cin>>n>>b>>h>>w)
    {
        ansmin=600000;

        while(h--)
        {
            cin>>cost;

                for(i=0;i<w;i++)
            {
                cin>>a;
                if((a>=n)&&(n*cost<=b))ans=n*cost;
                if(ans<ansmin)ansmin=ans;
            }

        }
        if(ansmin==600000)
            cout<<"stay home"<<endl;
        else
        cout<<ansmin<<endl;

    }



    return 0;
    }
