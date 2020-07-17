#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    int ans[100];
    int test[]={5,25,50,75,125,250,375,500,625,1250,1875,2500,3125,6250,9375};
    scanf("%d",&n);

    for(i=5;i<100001;i++)
{
    for(j=14;j>=0;j--)
    {
        if(i>=test[j]){
            break;
        }
    }
    if((i)/5==(n-j))
    {
        ans[count]=i;
        count++;
        }
}
printf("%d\n",count);
for(i=0;i<count;i++)printf("%d ",ans[i]);

}
