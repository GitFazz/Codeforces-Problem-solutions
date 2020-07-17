#include<bits/stdc++.h>
using namespace std;
#define Min .00000001

double area(double a,double b,double c) {
        double s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    int t,cnt=1;
   cin>>t;
    while(t--){
    double a,b,c,rat,hi,lo,A,B,R,mid,nb,nc;
    cin>>a>>b>>c>>rat;
    hi=0;
    lo=a;
    A=area(a,b,c);

    while(1)
    {
        mid=(hi+lo)/2.0;
        nb=(mid*b)/a;
        nc=(mid*c)/a;
        B=area(mid,nb,nc);
        R=B/(A-B);
        if(abs(rat-R)<Min)
        {
            printf("Case %d: %.8lf\n",cnt++,mid);
            break;
        }
        else if(R>rat) lo=mid;
        else hi=mid;
    }
    }
    return 0;
}
