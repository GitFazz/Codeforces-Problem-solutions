#include<bits/stdc++.h>
using namespace std;
int i,j,k,n;
int main()
{
    cin>>n;
    string word;
    map<char,int> cnt;
    map<char,int>::iterator im;
    vector<char> oddv,evenv;
    cin>>word;
    for(i=0;i<n;i++)cnt[word[i]]++;
    for(im=cnt.begin();im!=cnt.end();im++)
    {
        if(im->second%2!=0)
        {
            odd++;
            if(im->second<minodd)minodd=im->second;
        }
    }
    if(odd)
    {
        for(im=cnt.begin();im!=cnt.end();im++)
    {
        if(im->second%2==0)
        {
            evenv.push_back(im->first);
        }
        else
        {
            if(im->second>minodd)
            {
                evenv.push_back(im->first);
                cnt[im->first]=im->second-minodd;
                oddv.push_back(im->first);
            }
        }
    }

        for()










    }
    return 0;
}
