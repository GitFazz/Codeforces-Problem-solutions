#include<bits/stdc++.h>
using namespace std;

int i,j,k,mon,n;
float realcost,cost,owe,worth,dpay,nowper;
float per[105];
int month[105];


int main()
{
    while(cin>>mon>>dpay>>cost>>n)
    {
        j=0;
         if(mon<0)return 0;

         worth=(dpay+cost);
         owe=cost+dpay;

         for(i=0;i<n;i++)cin>>month[i]>>per[i];

         for(i=0;;i++)
         {

             if(i==month[j]&&i<=n)
             {
                 nowper=per[j];
                 j++;
             }
             cout<<nowper<<endl;
             owe=owe-dpay;
             worth=worth-(worth*nowper);

             if(owe<worth)
             {
                 cout<<owe<<" "<<worth<<endl;
                 cout<<i<<endl;
                 goto endf;
             }

         }



         endf:{}
    }



    return 0;
}
