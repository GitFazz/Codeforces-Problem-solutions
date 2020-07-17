#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cin>>n;
    int *a;

    a=new int [n];


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
