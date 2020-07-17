#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=20,n;
    map<string,int> ans;
    vector<string> w;
    string temp;
    int it;
    cin>>n;
    while(n--)
    {
    cin>>temp;
    for(i=0;i<20;i++)
    {
        if(temp.find("oo")!=-1)temp.replace(temp.find("oo"),2,"u");
        if(temp.find("kh")!=-1)temp.replace(temp.find("kh"),2,"h");
        if(temp.find("ou")!=-1)temp.replace(temp.find("ou"),2,"uo");
    }
    ans[temp]++;
    }

    cout<<ans.size()<<endl;


    return 0;
}
