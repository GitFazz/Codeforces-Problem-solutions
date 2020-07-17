#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,sum=0,cnt=0;
    int a[6];
    for(i=0;i<6;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0)
    {
        sum=sum/2;
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<5;j++)
            {
                for(k=j+1;k<6;k++)
                {
                   if((a[i]+a[j]+a[k])==sum)
                   {
                       cout<<"YES";
                       return 0;
                   }
                }
            }
        }
        cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
