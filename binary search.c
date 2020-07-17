#include<stdio.h>
#include<stdlib.h>
int comparefunc(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int key,*item,n=5;
    int values[]={1,2,5,8,10};
    while(1)

    {
    scanf("%d",&key);
    if(key==0){
        break;
    }
    item=(int*)bsearch(&key,values,n,sizeof(int),comparefunc);
    if(item!=NULL)
    {
        printf("item found : %d\n Location : %p\n",*item,item);
    }
    else {
        printf("not found\n");
    }
    }
}
