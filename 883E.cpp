#include<bits/stdc++.h>
using namespace std;
int i,j,k,a,b,n,m,fans;
int main()
{
    vector<int> star;
    cin>>n;
    char w[n];
    cin>>w;
    map<char,int> cntw;
    map<char,int> ans;
    map<char,int> current;
    for(i=0;i<n;i++)
    {
        cntw[w[i]]++;
        if(w[i]=='*')star.push_back(i);
    }
    cin>>m;
    char warray[m][n];
    for(i=0;i<m;i++)
    {
        cin>>warray[i];
        for(j=0;j<s;j++)
        {
            if(cntw[warray[i][star[j]]]!=0)
            {
                k++;
                star.erase(j);
                break;
            }
        }

    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<star.size();j++)
        {
            if(cntw[warray[i][star[j]]]!=0)goto fuck;

        }


        for(j=0;j<star.size();j++)
        {
            if(current[warray[i][star[j]]]==0)
            {
            ans[warray[i][star[j]]]++;
            if(ans[warray[i][star[j]]]==m-k)fans++;
        }
            current[warray[i][star[j]]]++;
        }
        current.clear();
        fuck:{}
    }
    cout<<fans;

    return 0;
}
