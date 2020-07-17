#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int q,t;
    cin>>t;
    while(t--)
    {
        long long int i,j=0,jmax=0,k=0,n,same=0,allgood=0,allbad=0,sp=0;
        cin>>n;
        long long int a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=a[i-1])allgood++;
            if(a[i]<=a[i-1])allbad++;
            if(a[i]==a[i-1])same++;
            if(i>1)
            {
                if((a[i-1]>a[i-2])&&(a[i-1]>a[i]))
                {
                    sp++;
                    if(sp>1)
                    {
                        j=i-k-1;

                        if(j>jmax)jmax=j;

                    }
                    k=i;

                }
            }


        }
        if(same==(n-1))
        {
            cout<<"neutral"<<endl;
            goto endf;
        }
        if(allgood==(n-1))
        {
            cout<<"allGoodDays"<<endl;
            goto endf;
        }
        if(allbad==(n-1))
        {
            cout<<"allBadDays"<<endl;
            goto endf;
        }
        if(sp>1)cout<<jmax<<endl;
        else cout<<"none"<<endl;


     endf:
     {

     }



    }


    return 0;
}
