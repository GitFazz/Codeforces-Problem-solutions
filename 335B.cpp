#include<bits/stdc++.h>
using namespace std;
#define Max 105
int dp[Max][Max];
string ans;

void palindrome(string str)
{
   int n = str.length();
   int i, j, cl;
   int L[n][n];
 for (i = 0; i < n; i++)
      dp[i][i] = 1;

    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
               dp[i][j] = 2;
            else if (str[i] == str[j])
               dp[i][j] = dp[i+1][j-1] + 2;
            else
               dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
        }
    }

}

int main()
{
    int i,j,k;
    string str;
    cin>>str;
    palindrome(str);
    int n=str.length();
    int len=dp[0][n-1]-1;
    char ans[len];
    ans[len]='\0';

    i=0; j=n-1,k=0;
    while(dp[i][j]!=0)
    {
        if(dp[i+1][j]==dp[i][j-1])
        {
            ans[k]=str[i];ans[len-k]=str[i];
            k++;
            i++;
            j--;
    }
    else if(dp[i+1][j]>dp[i][j-1])
    {
        ans[k]=str[i];ans[len-k]=str[i];
        k++;
        i++;
    }
    else
    {
        ans[k]=str[i]; ans[len-k]=str[i];
        k++;
        j--;
    }



    }

    cout<<ans<<endl;

    return 0;
}
