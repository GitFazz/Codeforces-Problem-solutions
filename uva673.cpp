#include<bits/stdc++.h>
using namespace std;


int main()

{
    int t;
    cin>>t;
    while(t--){
    int i=0,j;
    char br[100];
    vector<char> stk;
    cin>>br;

    while(br[i]!='\0')
    {

        if(br[i]=='['||br[i]=='(')
            stk.push_back(br[i]);


        if(br[i]==']'&&stk.back()=='[')
            {
            stk.pop_back();
            j=i;
            }
        if(br[i]==')'&&stk.back()=='('){
            stk.pop_back();
            j=i;
        }


        i++;
    }

    if(stk.empty())
    {
        if(i==(j+1))
        cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    else cout<<"No"<<endl;


    }
     return 0;
}
