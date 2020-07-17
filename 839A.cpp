#include<bits/stdc++.h>
using namespace std;


   int i,j,k,n,res;

int main()
{

   cin>>n>>k;
   int a[n];
   for(i=0;i<n;i++)cin>>a[i];


   for(i=0;i<n;i++)
   {
       if(a[i]>8)
       {
           res+=(a[i]-8);
       k-=8;
       }
       else
       {
           if(res>0)
           {
               if(res>=(8-a[i]))
               {
                 k-=8;
                 res-=(8-a[i]);
               }
               else {
                k-=(a[i]+res);
                res=0;
               }

           }
           else
           {
               k-=a[i];
           }


       }

       if(k<=0)
       {
           cout<<i+1;
           return 0;
       }


   }
   cout<<"-1";



    return 0;
}
