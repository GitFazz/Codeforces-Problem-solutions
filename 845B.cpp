#include<bits/stdc++.h>
using namespace std;

    int i,j,k,sone,stwo,ans,d;
    int one[3],two[3];
    char tic[6];

int main()
{

    cin>>tic;
    for(i=0;i<3;i++)
    {
        one[i]=tic[i]-'0';
        sone+=one[i];
        two[i]=tic[i+3]-'0';
        stwo+=two[i];

    }

    sort(one,one+3);
    sort(two,two+3);

    if(sone>stwo)
    {
        d=sone-stwo;

        while(d)
        {
            d-=(9-two[ans]);ৈ
            ans++;
        }


    cout<<ans;
    }
    else if(stwo>sone)
    {

        d=stwo-sone;

        while(d>0)
        {
            d-=(9-one[ans]);
            ans++;
        }
        cout<<ans;


    }
    else
    {
        cout<<0;
    }






    return 0;
}
