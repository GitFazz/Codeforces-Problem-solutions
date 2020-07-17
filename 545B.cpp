#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0,j=0,k=0,cnt=0;
    char a[100000],b[100000];
    gets(a);
    gets(b);
    while(a[i]!='\0')
    {
        if(a[i]!=b[i])cnt++;
        i++;
    }
    if(cnt%2==0){
            cnt=cnt/2;
    while(a[j]!='\0')
    {
       if(a[j]==b[j])
       {
           printf("%c",a[j]);
           j++;
       }
       else
       {
          if(k<cnt)
          {

              printf("%c",b[j]);
              j++;
              k++;
          }
    else{ printf("%c",a[j]);
    j++;
    }
       }

    }
    }
    else printf("impossible");


    return 0;
    }
