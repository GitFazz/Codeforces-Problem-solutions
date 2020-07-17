#include<stdio.h>
#include<string.h>
main()
{
    int len,i,j,n;
    char word[200][200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&word[i]);
    }
    for(i=0;i<n;i++)
    {
        len=strlen(word[i]);
        if(len>10)
        {
            printf("%c%d%c\n",word[i][0],len-2,word[i][len-1]);
        }
        else
            printf("%s\n",word[i]);
    }
}
