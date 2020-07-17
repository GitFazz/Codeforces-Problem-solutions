#include<bits/stdc++.h>
using namespace std;


    int i,j,k,a,n,b,cnt,icnt;

int main()
{

    cin>>n;
    char word[n];

    gets(word);


    for(i=0;i<=n;i++)
    {
        if(word[i]>='A'&&word[i]<='Z')cnt++;

        if(word[i]==' '||word[i+1]=='\0')
        {
            if(cnt>icnt)icnt=cnt;
            cnt=0;
        }




    }
    cout<<icnt;

    return 0;
}
