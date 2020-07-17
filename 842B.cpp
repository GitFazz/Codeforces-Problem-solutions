#include<bits/stdc++.h>
using namespace std;

struct ssg{
 double x,y,r;

}vssg[100005];

int main()
{
    long long int i;
    double r,d,n;
    cin>>r>>d>>n;

    for(i=0;i<n;i++)
    {
        cin>>vssg[i].x>>vssg[i].y>>vssg[i].r;

    }

    int cnt=0;

    for(i=0;i<n;i++)
    {
        double disr=sqrt(vssg[i].x*vssg[i].x+vssg[i].y*vssg[i].y)+vssg[i].r;
        double disl=sqrt(vssg[i].x*vssg[i].x+vssg[i].y*vssg[i].y)-vssg[i].r;


        if(disr<=r&&disl>=(r-d))cnt++;



    }


    cout<<cnt;

    return 0;
}
