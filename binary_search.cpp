#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,mid,srch;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    while(cin>>srch){
    int hi=9;
    int lo=0;
    while(hi>=lo)
    {
        mid=(hi+lo)/2;
        if(a[mid]==srch) cout<<"the ans is "<<mid<<endl;
        if(a[mid]>srch)
        {
            hi=mid-1;
        }
        else lo=mid+1;
    }

    }
    return 0;
}
