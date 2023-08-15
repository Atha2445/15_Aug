#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float cgpa;
}s,v;
int main()
{
    scanf("%s",s.name);
    scanf("%d",&s.rollno);
    scanf("%f",&s.cgpa);

    scanf("%s",v.name);
    scanf("%d",&v.rollno);
    scanf("%f",&v.cgpa);

    printf("%s\n",s.name);
    printf("%d\n",s.rollno);
    printf("%.2f",s.cgpa);

    printf("%s\n",v.name);
    printf("%d\n",v.rollno);
    printf("%.2f",v.cgpa);
}
