#include<bits/stdc++.h>
using namespace std;
#define pp pair<long long int,pair<long long int,long long int> >
priority_queue< pp,vector<pp>,greater<pp> > pq;

int main()
{
    long long int i,j,k,N,E,a,b,w,S;
    map<long long int,long long int> s;
    cin>>N>>E>>S;
    for(i=0;i<E;i++)
    {
      cin>>a>>b>>w;
      pq.push(make_pair(w,make_pair(a,b)));
    }
    for(i=0;i<S;i++)
    {
        cin>>a;
        s[a]=i;
    }

    while(!pq.empty())
    {
        a=pq.top().second.first;
        b=pq.top().second.second;
        w=pq.top().first;

        if(s.find(a)!=s.end()&&s.find(b)==s.end()||(s.find(b)!=s.end()&&s.find(a)==s.end()))

            {
                cout<<w<<endl;
                return 0;
            }
        pq.pop();
    }
    cout<<-1<<endl;

    return 0;
}
