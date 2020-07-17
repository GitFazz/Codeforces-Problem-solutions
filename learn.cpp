#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,k,a,b;
    vector<int> myv;
    int mya[5]={5,10,15,20,21};
    myv.insert(myv.begin(),mya,mya+5);
    myv.pop_back();
    cout<<myv[4];

}
