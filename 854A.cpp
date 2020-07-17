#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,k,n,a,b;
    cin>>n;

    if(n%2==0)
    {
        a=(n/2)-1;
        b=(n/2)+1;

    }
    else
    {
        a=n/2;
        b=(n/2)+1;
    }



    for(i=a;i>=1;i--)
    {
        if(a==1)
    {
        cout<<"1 "<<b;
        return 0;
    }

        for(j=2;j<=a;j++)
        {
            if((a%j==0)&&(b%j==0))
            break;

            if(j==a)
            {
                cout<<a<<" "<<b;
                return 0;
            }

        }


        a--;
        b++;
    }



    return 0;
    }
