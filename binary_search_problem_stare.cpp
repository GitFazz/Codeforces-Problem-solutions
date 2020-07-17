#include<bits/stdc++.h>
using namespace std;
#define Min .00000001
#define Max 100000
double a,b,c,hi,lo,cp,p,q,w;
int n,i=1;
double pq(double a,double w)
{
    return sqrt(a*a-w*w);
}
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);


    cin>>n;
    while(n--){
    cin>>a>>b>>c;
    hi=(a<b)?a:b;
    lo=0.0;
    cp=0.0;
    int k  = 0;
    while(1)
    {

        w=(hi+lo)/2.0;
        p=pq(a,w);
        q=pq(b,w);
        cp=(p*q)/(p+q);
        if(abs(cp-c)<=Min) break;
        if(cp>c)lo=w;
        else hi=w;
        k++;
      //  printf("%llf %llf %llf\n", hi , lo, cp);
        if(k==100) while(1);
    }
    printf("Case %d: %.8lf\n",i++,w);
}

    return 0;
}
