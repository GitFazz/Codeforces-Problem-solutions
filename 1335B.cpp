#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,a,b;
    char ch = 'a';
    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b;
        string fullstr = "",halfstr = "", str = "";
        int fn = (n/a);
        int halfsize = (n%a);

        char last;
        for(int i=0;i<b;i++)
        {
            fullstr += (char)(ch+i);
            last = (char)(ch+i);
        }

        for(int i=0;i<(a-b);i++)
        {
            fullstr += last;
        }

        for(int i=0;i<fn;i++)
        {
            str += fullstr;
        }

        str += fullstr.substr(0,halfsize);

        cout << str << endl;


    }




    return 0;
}
