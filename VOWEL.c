#include<stdio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);
    char word[n];
    scanf("%s",&word);
    for(i=0;i<n;i++)
    {
        j=1;
        if((word[i]=='i'||word[i]=='u'||word[i]=='a'||word[i]=='y')&&(word[i]==word[i+1]))
            continue;
        else if(word[i]=='o'||word[i]=='e')
        {
            while(word[i]==word[i+1]){
                    i++;
                    j++;
                }
                if(j==2)
                    printf("%c%c",word[i],word[i]);
                else printf("%c",word[i]);
        }
        else
            printf("%c",word[i]);
    }

}

