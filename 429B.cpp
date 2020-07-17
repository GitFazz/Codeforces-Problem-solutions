#include<bits/stdc++.h>
using namespace std;

long long int i,j,k,a,b;
 char one[26];
 char two[26],ch;

int main()
{

    for(i=0;i<26;i++)cin>>one[i];
    for(i=0;i<26;i++)cin>>two[i];
    while(cin>>ch)
    {
        k=0;
        if(ch>='A'&&ch<='Z'){
        ch=ch-'A'+'a';
        k=1;
        }
        for(j=0;j<26;j++)
        {
            if(ch==one[j])
            {
                if(k==1)cout<<two[j]-'A'+'a';
                else cout<<two[j];
                goto flag;
            }

        }
        cout<<ch;
        flag:
            {

            }
    }



    return 0;
}
