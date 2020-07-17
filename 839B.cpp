#include<bits/stdc++.h>
using namespace std;


long long int i,j,k,n,t,r;
long long int a[1000000];

int main()
{

 cin>>n>>k;

 n=n*8;

 for(i=0;i<k;i++)
 {
     cin>>a[i];
 }

 for(i=0;i<k;i++)
 {
     t=a[i]%8;
     if(t%8==0)n-=a[i];
     else{

        r=n%8;
     if(r==8){
     if(t==2||t==4)
     n-=a[i];
     else n-=(a[i]+1);

     }
     else if(r==7)
     {
         if(t==1||t==3)
            n-=a[i];
         else n-=(a[i]+1);
     }
     else if(r==6)
     {
         if(t==2)
            n-=a[i];
         else n-=(a[i]+1);
     }

else if(r==5){
    if(t==1)
            n-=a[i];
         else n-=(a[i]+1);
}
else n-=(a[i]+1);
 }

 if(n<0)cout<<"NO";


 }
 cout<<"YES";

    return 0;
}
