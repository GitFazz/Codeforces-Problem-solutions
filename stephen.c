#include<stdio.h>
main()
{
    int i=0,j,n;
    char word[100000];
    scanf("%s",&word);

           while(i<10){
                j=0;
            if(word[i]=='a'||word[i]=='i'||word[i]=='u'||word[i]=='y'){
                    printf("%c",word[i]);
               while(word[i]==word[i+1]){
                i++;
               }
            }
            else if(word[i]=='e'||word[i]=='u'){
                printf("%c",word[i]);
                while(word[i]==word[i+1])
            {
                i++;
                j++;
            }
            if(j=1)
                printf("%c",word[i]);
            }
            else{ printf("%c",word[i]);
            i++;
            }
           }

           }

