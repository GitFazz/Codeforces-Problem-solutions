#include<bits/stdc++.h>
using namespace std;
long long int a,b,i,j,k,cnt;
int main()

{

    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        for(j=i+1;;j++){
        if((j*j)-(i*i)<=b)
            cnt++;
            else break;
        }
    }
    cout<<cnt<<endl;


    return 0;
}
