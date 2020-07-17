
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,ans=0,len;
    vector<int> ai,qi;
    string str;
    cin>>str;
    len = str.length();

    for(i=0;i<len;i++)
    {

        if(str[i]=='Q')qi.push_back(i);
        else if(str[i]=='A')ai.push_back(i);
    }

    for(i=0;i<ai.size()&&qi.size()>0;i++)
    {
        for(k=0;k<qi.size()-1;k++)
        {
           for(j=k+1;j<qi.size();j++)
          {
             if(ai[i]>qi[k]&&ai[i]<qi[j])
             {
                ans++;
             }
           //  else break;
          }
        }
    }
    cout<<ans;
    return 0;
}
