#include<bits/stdc++.h>
using namespace std;


void bucketSort(float* a,int n)
{
    vector <float> bucket[5];

    ///handling any input !!!
    float maxx=0.00,minn=0.00;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxx)
            maxx=a[i];
        if(a[i]<minn)
            minn=a[i];
    }

    int ptemp =1, ntemp=1, temp;
    if(maxx>=1||minn<0)
    {
        while(maxx>=1)
        {
            maxx=maxx/10;
            ptemp*=10;
        }
        while(minn<0)
        {
            minn=minn/10;
            ntemp*=10;
        }
    }

    temp = (ptemp>ntemp)?ptemp:ntemp;

    ///making the range into [0,1)

    for(int i=0;i<n;i++)
        a[i]=a[i]/temp;

    for(int i=0;i<n;i++){
        int bi = n*a[i]/5;
        bucket[bi].push_back(a[i]);
    }

    for(int i=0;i<5;i++)
        sort(bucket[i].begin(),bucket[i].end());


    for(int i=0,idx=0;i<5;i++)
    {
        for(int j=0;j<bucket[i].size();j++,idx++)
            a[idx]=bucket[i][j]*temp;   ///making original values!
    }

}


int main()
{
    float Array[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }

    bucketSort(Array,n);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++)
        cout<<Array[i]<<"  ";
        cout<<endl;

    return 0;
}
