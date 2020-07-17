#include<bits/stdc++.h>
using namespace std;

int i,j,k,n,m,fans;

int main()
{
    cin>>n;
    vector<int> star;
    vector<int> notstar;
    vector<string> test;
    map<char,int> already,current,ans;
    string word,temp;
    cin>>word;
    for(i=0;i<n;i++)
    {
        if(word[i]=='*')star.push_back(i);
        else
        {
            already[word[i]]++;
            notstar.push_back(i);
        }
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>temp;
        for(j=0;j<star.size();j++)
        {
            if(already[temp[star[j]]]!=0)goto fuck;
        }
        for(j=0;j<notstar.size();j++)
        {
            if(word[notstar[j]]!=temp[notstar[j]]) goto fuck;
        }
        test.push_back(temp);
        fuck:{}
    }
    for(vector<string>::iterator it=test.begin();it!=test.end();it++)
    {
        temp=*it;
        for(i=0;i<star.size();i++)
        {
            if(current[temp[star[i]]]==0)
            {
                ans[temp[star[i]]]++;
                if(ans[temp[star[i]]]==test.size())fans++;
            }
            current[temp[star[i]]]++;
        }
        current.clear();
    }

    cout<<fans;

    return 0;
}
