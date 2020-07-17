#include<stdio.h>
#include <string.h>

int main()
{
    int i, j,n;
    char word[10][50], temp[50];
    scanf("%d",&n);

    for(i=0; i<n; i++)
        scanf("%s",word[i]);

    i=0;
    while(i<n-1){
        for(j=i+1; j<n ; ++j)
        {
            if(strcmp(word[i], word[j])>0)
            {
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
        i++;
    }

    for(i=0; i<n; ++i)
    {
        printf("%s\n",word[i]);
    }

}
