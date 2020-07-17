#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,m,b,mx,ans,x,y;

int main()
{
        freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
   while(cin>>m>>b){
    for(i=0;i<=b;i++)
    {
        y=i;
        x=(b*m-y*m);
 //       cout<<x<<" "<<y<<endl;
        ans=(x+1)*(y+1)*(x+y)/2;
        if(ans>mx)mx=ans;
    }
    cout<<mx<<endl;

   }


    return 0;
}
