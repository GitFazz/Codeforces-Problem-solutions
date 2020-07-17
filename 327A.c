#include<stdio.h>
main()
{
   int x=10;
   int *px;
   px=&x;
   printf("the value of x is : %d\n",x);
   printf("%p\n",px);
   *px=20;
   printf("the value of x is : %d\n",x);
   printf("%p\n",px);
}
