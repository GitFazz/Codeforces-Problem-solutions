#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,a,ans=0;
    string contest;
    vector<string> name;
    name.push_back("Danil");
    name.push_back("Olya");
    name.push_back("Slava");
    name.push_back("Ann");
    name.push_back("Nikita");

    cin>>contest;
    for(i=0;i<5;i++)
    {
        while(contest.find(name[i])!=-1)
        {
            ans++;
            contest.replace(contest.find(name[i]),name[i].length(),"*");
        }
    }
    if(ans==1)cout<<"YES";
    else cout<<"NO";
    return 0;
}
