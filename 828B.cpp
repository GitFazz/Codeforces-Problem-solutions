#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,cnt=0,fi,fj,li,lj,t=1;
    cin>>a>>b;
    char arr[a][b];
    for(i=0;i<a;i++)
    {

        for(j=0;j<b;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='B'){
            if(t){
                fi=i;
                fj=j;
                t=0;
            }
            li=i;
            lj=j;
            }
        }

    }
    n=li-fi;
    if(n>b)

    for(i=fi;i<=li;i++)
    {
        for(j=lj;j>(lj-n);j--)
        {
            if(a[i][j]=='W')cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
