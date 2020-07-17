#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,n,maxwin=0,ans,temp;
int main()
{
   cin>>n>>k;
   vector<long long int> Line;
   map<long long int,long long int> win;
   for(i=0;i<n;i++)
   {
       long long int x;
       scanf("%lld",&x);
       Line.push_back(x);
   }
   n--;
   while(n--)
   {
       ans++;
       if(Line[0]>Line[1])
       {
           i=Line[0];
           temp=Line[1];
           Line.erase(Line.begin()+1);
           Line.push_back(temp);
       }
       else
       {
           i=Line[1];
           temp=Line[0];
           Line.erase(Line.begin()+0);
           Line.push_back(temp);
       }
       win[i]++;
       if(win[i]>maxwin)maxwin=win[i];
       if(maxwin==k)
       {
           cout<<i<<endl;
           return 0;
       }
   }
   cout<<i<<endl;
}
