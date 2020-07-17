#include<stdio.h>
void recur()
{
    char a[]="learning a new thing";
    printf(" %s",a);
    recur();
}
main()
{
    recur();
    return 0;

}
