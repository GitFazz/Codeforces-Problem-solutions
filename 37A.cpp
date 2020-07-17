#include<bits/stdc++.h>
using namespace std;


int main()
{

  long long int i,j,k=1,maxcnt=0,cnt=1,n;
  long long int a[1005];

  cin>>n;
  for(i=0;i<n;i++)cin>>a[i];

  if(n==1)
    cout<<"1 1";
  else{

  sort(a,a+n);

  for(i=0;i<n-1;i++)
  {

      if(a[i]==a[i+1])
      {
          cnt++;
      }
      else
      {
          cnt=1;
          k++;
      }
      if(cnt>maxcnt)maxcnt=cnt;
  }

  cout<<maxcnt<<" "<<k;
  }



    return 0;
}
