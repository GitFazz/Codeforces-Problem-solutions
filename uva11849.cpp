#include<bits/stdc++.h>
using namespace std;
long long int T,i,j,k,m,n,t,cnt;
int main()
{

    while(cin>>m>>n)
    {
        k=min(m,n);
        queue <int> qm;
        queue <int> qn;
        cnt=0;
        if(m<1&&n<1)break;

        while(m--)
        {
            cin>>t;
            qm.push(t);
        }
        while(n--)
        {
            cin>>t;
            qn.push(t);
        }
        while((!qn.empty())&&(!qm.empty()))
        {
            if(qn.front()==qm.front()){
                    cnt++;
                    qn.pop();
                    qm.pop();
            }
            else if(qn.front()>qm.front())qm.pop();
            else qn.pop();


        }

        cout<<cnt<<endl;

    }


    return 0;
}
