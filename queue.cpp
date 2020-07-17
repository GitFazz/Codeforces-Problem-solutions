#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k;
    stack<int> line;

    for(i=0;i<5;i++)
    {
        cin>>k;
        line.push(k);
    }

    while(!line.empty())
    {
        cout<<line.top()<<endl;
        line.pop();
    }

    return 0;
}
