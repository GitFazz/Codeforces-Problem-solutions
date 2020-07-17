#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,Q,i,j,k;
    while(scanf("%d%d",&M,&Q)==2)
    {
        int a[M];
        if(M==0&&Q==0)break;
        map< pair<int,int>, int>ans;
        for(i=0;i<M;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<M-1;i++)
        {
            map< int, int> cnt;

            cnt[a[i]]=1;
            for(j=i+1;j<M;j++)
            {
                cnt[a[j]]++;
                ans[make_pair(i,j)]=-1;
                if(cnt[a[j]]>1)
                {
            for(k=j;k<M;k++)
            {
                ans[make_pair(i,k)]=a[j];
            }
            break;
                }

            }
            cnt.clear();
        }

        for(i=0;i<Q;i++)
        {
            long long int x,y;
            scanf("%d%d",&x,&y);
            x--;
            y--;
            if(ans[make_pair(x,y)]==-1)
                printf("OK\n");
            else
             printf("%d\n",ans[make_pair(x,y)]);
        }
        printf("\n");
        ans.clear();


    }


    return 0;
}
