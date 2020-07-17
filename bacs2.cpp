#include<bits/stdc++.h>
using namespace std;

long long int fuck_max(long long int a[],long long int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int main()
{
    long long t,g;
    cin>>t;
    for(g=0;g<t;g++)
    {
        long long int i,j,l,t,n,k;
        cin>>n>>k;



        long long int a[n],acp[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            acp[i]=a[i];
        }
        sort(acp,acp+n);

        for(l=0;l<k&&acp[l]<0;l++)
        {
         for(j=0;j<n;j++)
                {
                    if(a[j]==acp[l]){
                            a[j]=0;
                    break;
                    }
                }
        }

        long long int ans=fuck_max(a,n);
        printf("Case %lld: %lld\n",g+1,ans);
    }


}
