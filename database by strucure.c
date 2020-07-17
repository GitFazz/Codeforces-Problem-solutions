#include<stdio.h>
#include<string.h>
typedef struct{
    char nameone[10];
    char nametwo[10];
}nametype;
struct name_id{
    int id;
    char grade[3];
    nametype name;
}var[5];

void grade(struct name_id a,int i)
{
    int n=a.id;
    if(n>=80)
        strcpy(var[i].grade,"A+");

    else if(n>=70)
        strcpy(var[i].grade,"A");
    else if(n>=60)
        strcpy(var[i].grade,"A-");
    else if(n>=50)
        strcpy(var[i].grade,"B");
    else
        strcpy(var[i].grade,"F");

}
main()
{
    int i;
    for(i=0;i<5;i++){
    scanf("%s",var[i].name.nameone);
    scanf("%s",var[i].name.nametwo);
    scanf("%d",&var[i].id);
    }
    for(i=0;i<5;i++)
    {
    grade(var[i],i);
    printf(" NAME: %s %s \t MARKS: %d \t GRADE: %s \n",var[i].name.nameone,var[i].name.nametwo,var[i].id,var[i].grade);
}
}
