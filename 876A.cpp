#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,n,a,b,c=0,ans=0,now=1;
    int x=-4,y=2,z=6;
    cout<<(x%3)<<endl;
    cout<<(z%y)<<endl;
    int node[4][4];
    cin>>n;
    n--;
    cin>>node[1][2]>>node[1][3]>>node[2][3];
    node[2][1]=node[1][2];
    node[3][1]=node[1][3];
    node[3][2]=node[2][3];

    while(c<n)
    {
        if(now==1)
        {
            if(node[1][2]<node[1][3])
            {
                now=2;
                ans+=node[1][2];
            }
            else
            {
                now=3;
                ans+=node[1][3];
            }
        }
        else if(now==2)
        {
            if(node[2][1]<node[2][3])
            {
                now=1;
                ans+=node[2][1];
            }
            else
            {
                now=3;
                ans+=node[2][3];
            }
        }
        else if(now==3)
        {
            if(node[3][1]<node[3][2])
            {
                now=1;
                ans+=node[3][1];
            }
            else
            {
                now=2;
                ans+=node[3][2];
            }
        }
        c++;
    }
    cout<<ans<<endl;

return 0;
}
