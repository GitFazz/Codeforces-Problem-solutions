#include<bits/stdc++.h>
using namespace std;
int i,j;
char a[200],b[200];
int main()
{
    cin>>a>>b;
    while(a[i]!='\0')
    {
        if(a[i]==b[i])cout<<"0";
        else cout<<"1";
        i++;
        }

    return 0;
}
