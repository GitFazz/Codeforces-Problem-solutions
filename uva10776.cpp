#include<bits/stdc++.h>
using namespace std;

bool taken[10005];
vector<char> retStr;
string str;
int len;

void generateWord(int ind)
{
    if(retStr.size() == len)
    {
        for(int i=0;i<retStr.size();i++)
            cout<<retStr[i];
        cout << endl;
        return;
    }


    for(int i=ind;i<str.length();i++)
    {
        if(taken[i]==false)
        {
            taken[i] = true;
            retStr.push_back(str[i]);
            generateWord(i+1);
            taken[i] = false;
            retStr.pop_back();
        }

        while(str[i]==str[i+1])i++;
    }
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    while(cin>> str >> len){
    retStr.clear();
    memset(taken,0,sizeof(taken));
    sort(str.begin(),str.end());
    generateWord(0);

   }

    return 0;
}
