#include<bits/stdc++.h>
using namespace std;

int arr[1005];
bool taken[1005];

void printPermutation(int i,int n)
{
    if(i==n)
    {
        for(int i=0;i<n;i++)
            cout << arr[i];
        cout << endl;
    }

    for(int ii=0;ii<n;ii++)
    {
        if(!taken[ii])
        {
            taken[ii] = true;
            arr[i] = ii;
            printPermutation(ii+1,n);
            taken[ii] = false;
        }
    }
}

int main()
{
    int s;
    cin>>s;
    printPermutation(0,s);


    return 0;
}
