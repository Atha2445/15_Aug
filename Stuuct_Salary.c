#include<stdio.h>
#include<conio.h>
union job{
char name[40];
float salary;

}u;
int main()
{
    scanf("%s",u.name);
    printf("Name:%s",u.name);
    scanf("%f",&u.salary);
    printf("Salary: %.1f\n",u.salary);
    printf("%u",sizeof(u));
    return 0;
}
