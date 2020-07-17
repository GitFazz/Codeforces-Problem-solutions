#include<stdio.h>
main(){
int n,i,ans,first,last,mid,target;
scanf("%d",&n);
int num[100];
for(i=0;i<n;i++){
    scanf("%d",&num[i]);
}
    scanf("%d",&target);
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
{
    if(num[mid]==target){
    ans=mid;
    break;
    }
    else if(num[mid]<target)
    first=mid+1;
    else if(num[mid]>target)
        last=mid-1;
        mid=(first+last)/2;
}
if(ans==-1)printf("YES");
else printf("%d",ans);
}

