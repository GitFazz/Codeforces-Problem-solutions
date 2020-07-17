#include<bits/stdc++.h>
using namespace std;
string word;
int i,j,k,n,a,b,b1st,blast,finali,finalj,ans=0;
int apos[10000],bpos[10000];
double eff,feff=0;


int main()
{
    cin>>word;
    for(i=0;i<word.length();i++)
    {
        if(word[i]=='a')
        {
            apos[i]=++a;
            bpos[i]=b;
        }
        else
        {
            bpos[i]=++b;
            apos[i]=a;
        }
        if(bpos[i]==1)b1st=i;
        if(word[i]=='b')blast=i;
    }
    for(i=b1st;i<=blast;i++)
    {
        for(j=i;j<=blast;j++)
        {
            int nb=bpos[j]-bpos[i]+1;
            int ntot=j-i+1;
            eff=(double)nb/(double)ntot;
            eff=nb*eff;
            if(eff>feff)
            {
                feff=eff;
                finali=i;
                finalj=j;
            }
        }
    }
    int len=word.length();
    for(i=0;i<finali;i++)
    {
        if(word[i]=='b')ans++;
    }
    for(i=0;i<finali;i++)
    {
        if(word[i]=='b')ans++;
    }
    for(i=finalj+1;i<len;i++)
    {
        if(word[i]=='b')ans++;
    }
    for(i=finali;i<=finalj;i++)
    {
        if(word[i]=='a')ans++;
    }
    cout<<finali<<" "<<finalj<<endl;
    cout<<len-ans<<endl;
    return 0;
}
