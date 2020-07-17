#include <stdio.h>
int main()
{
   int num;
   int a=4;
   FILE *fptr;
   fptr = fopen("ana.txt","r");

   while(a--)
   {
       fscanf(fptr,"%d",&num);
       printf("%d\n",num);

       fptr++;


   }
   fclose(fptr);


   return 0;
}
