#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long long int i,j,k,a,b,n;
     cin>>n>>k;
     int last=n%10;
     if(k==1||k==3||k==7||k==9)
     {
         long long int N=1;
         for(i=0;i<k;i++)
         {
              N*=10;
         }
         cout<<n*N<<endl;
     }
     else if(k==5)
     {
         long long int N=2;
         for(i=0;i<k-1;i++)
         {
             N*=10;
         }
         cout<<n*N<<endl;
     }
     else if(k==0)
     {

         int zero=0;
         long long int N=n;
         while(N)
         {
             if(N%10==0)
             {
                 zero++;
                 N=N/10;
             }
             else break;

         }
        N=1;
         for(i=0;i<k-zero;i++)
         {
             N*=10;
         }
         cout<<n*N<<endl;
     }
     else
     {
         long long int N=5;
         for(i=0;i<k-1;i++)
         {
             N*=10;
         }
         cout<<n*N<<endl;
     }
     return 0;
 }

