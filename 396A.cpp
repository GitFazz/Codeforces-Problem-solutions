#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,a,b;
    char s1[100001],s2[100001];
    scanf("%s",s1);
    scanf("%s",s2);
    c=strcmp(s1,s2);
    if(c==0)
    {
        printf("-1");
        return 0;
        }
    if(strlen(s1)>strlen(s2))printf("%d",strlen(s1));
    else printf("%d",strlen(s2));


    return 0;
}

