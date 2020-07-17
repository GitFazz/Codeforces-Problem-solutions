#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b,cnt=0,n,one,two,stwo=0;
    cin>>n>>one>>two;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            if(one>0)one--;
            else if(two>0)
            {
                two--;
                stwo++;
            }
            else if(stwo>0)stwo--;
            else cnt++;

        }
        if(a==2)
        {
            if(two>0)two--;
            else cnt+=2;;
        }



    }
    cout<<cnt<<endl;


    return 0;
}
