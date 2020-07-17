#include<bits/stdc++.h>
using namespace std;
int q=1;
bool isDromic(string str)
{
    int odd=0;
    int s=str.size();
    if(s==1)return true;
    if(s==2&&str[0]==str[2]) return true;
    map<char,int> cnt;

    for(string::iterator iter=str.begin();iter!=str.end();iter++)
    {
        cnt[*iter]++;
    }

    for(map<char,int> :: iterator iter=cnt.begin();iter!=cnt.end();iter++)
    {
        int t=((*iter).second);
        if(t%2!=0)odd++;
        if(odd>1) return false;
    }
    return true;

}

void generator(string str)
{
    string str2;
    int cnt=0;
   int  n=str.size();
   for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            //for (int k = i; k <= j; k++)
            //cout << str[k];
            int pos=i;
            int l=j-i+1;

            str2=str.substr(pos,l);
            if(isDromic(str2)) cnt++;

        }


    }
    printf("Case %d: %d\n",q,cnt);
        q++;
}



int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;

        generator(str);

    }


    return 0;
}
