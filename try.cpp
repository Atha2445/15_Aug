#include<string.h>
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    float cgpa;
};
int main(){
 student s;
 student v={"v h\n",7,9.720};
s.rollno=1;
s.cgpa=9.8;
printf("\n");
strcpy(s.name,"a");
printf("%s\n",s.name);
    printf("%d\n",s.rollno);
    printf("%.2f\n;",s.cgpa);

    printf("%s\n",v.name);
    printf("%d\n",v.rollno);
    printf("%.2f\n",v.cgpa);
}

