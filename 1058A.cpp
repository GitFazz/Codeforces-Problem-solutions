#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t==1)
            flag = 1;
    }

    if(flag)
        cout << "HARD";
    else
        cout << "EASY";


    return 0;
}
