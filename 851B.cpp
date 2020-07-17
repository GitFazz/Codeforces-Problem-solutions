#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long int i,j,k,x1,x2,x3,y1,y2,y3,d1,d2;

    double test;


    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    test=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);


    if(test==0)cout<<"No";
    else
    {
        d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);

        if(d1==d2)cout<<"Yes";
        else cout<<"No";



    }




    return 0;
}
