#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,b,i,j;
   scanf("%d",&n);
   int tr[n];
   for(i=0;i<n;i++)
   scanf("%d",&tr[i]);
   sort(tr,tr+n);
   for(i=0;i<n-2;i++)
   {
       if((tr[i]+tr[i+1])>tr[i+2])
       {

        printf("YES");
       return 0;
       }
   }

printf("NO");
    return 0;
}


