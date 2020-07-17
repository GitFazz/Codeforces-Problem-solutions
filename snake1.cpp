#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,s,m,ns,nm;
    scanf("%d",&t);
    char sn[t][200];
    for(i=0;i<t;i++)
    {
        j=0;
        ns=0;
        nm=0;
        scanf("%s",&sn[i]);
        while(sn[i][j]!='\0')
        {
            if(sn[i][j]=='s')ns++;
            else nm++;
            j++;
        }
        j=0;
        while(sn[i][j+1]!='\0')
        {
            if(sn[i][j]=='s'&&sn[i][j+1]=='m')
            {
                ns--;
                j++;
            }
            else if(sn[i][j]=='m'&&sn[i][j+1]=='s')
                {
                  //  j++;
                    ns--;
                    j++;
                }
            j++;
        }
        if(ns>nm)printf("snakes\n");
        else if(nm>ns)printf("mongooses\n");
        else printf("tie\n");

    }

}
