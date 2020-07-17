#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,E;
    cin>>n>>E;
    vector< list<int> > adjMat(n);

    for(i=0;i<E;i++)
    {
        cin>>a>>b;
        a--;
        b--;
        adjMat[a].push_back(b);



    }

  //  adjMat[0].erase(adjMat[0].begin(),adjMat[0].end());

    if(adjMat[0].empty())cout<<"yeah"<<endl;

    list<int>:: iterator iter;

    vector< list<int> > :: iterator iv;
    int c=0;
    for(iv=adjMat.begin();iv!=adjMat.end();iv++)
    {
        cout<<c<<" is connected to ";

        list<int> il=*iv;
        for(iter=il.begin();iter!=il.end();++iter)
        {
            cout<<*iter<<" ";
        }
        cout<<endl;
        c++;
    }



        return 0;
}

