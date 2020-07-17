#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={5,4,3,2,1};
    int i=1,j=4;
    sort(a+i-1,a+j);
    for(i=0;i<5;i++)
    {
        printf("%d\n",add(i,a[i]) );
    }
}

int add (int a;int b)
{
    return a+b;
}
