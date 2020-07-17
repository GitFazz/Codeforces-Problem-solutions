#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
     vector<int> myv;
    for(i=0;i<5;i++)
    {
        cin>>t;
        myv.push_back(t);

    }

    for(unsigned int j=0;j<myv.size();j++)
    {
        cout<<myv.at(j)<<" ";
    }

    myv.pop_back();

    cout<<endl;


    for(unsigned int j=0;j<myv.size();j++)
    {
        cout<<myv.at(j)<<" ";
    }

    myv.insert(myv.begin()+2,10);

    cout<<endl;
    for(unsigned int j=0;j<myv.size();j++)
    {
        cout<<myv.at(j)<<" ";
    }






}
