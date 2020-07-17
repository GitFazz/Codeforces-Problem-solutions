#include<bits/stdc++.h>
using namespace std;


bool isDis(int n)
{
    int a[4],i=0,k;
    while(n)
    {
        a[i++]=n%10;
        n=n/10;
    }

    for (i = 0; i < 4; i++)
    for ( k = i + 1; k < 4; k++)
        if (a[i] == a[k]){
            return false;
        }
return true;
}

int main()
{
    int i,year;
    cin>>year;

    for(i=year+1;;i++)
    {
        if(isDis(i)==true){
            cout<<i<<endl;
            return 0;

        }
    }


    return 0;
}
