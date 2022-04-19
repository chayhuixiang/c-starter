#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    int hireDate;
    float salary;
};

int main(){

    struct employee employee1;
    strcpy(employee1.name,"John");
    employee1.hireDate = 1000;
    employee1.salary = 1000;

    struct employee employee2;
    printf("Enter employee 2's name: ");
    scanf("%s",employee2.name);
    printf("Enter employee 2's hire date: ");
    scanf("%d",&employee2.hireDate);
    printf("Enter employee 2's salary: ");
    scanf("%f",&employee2.salary);

    printf("Employee 1 - Name: %s | Hire Date: %d | Salary: %f\n",employee1.name,employee1.hireDate,employee1.salary);
    printf("Employee 2 - Name: %s | Hire Date: %d | Salary: %f\n",employee2.name,employee2.hireDate,employee2.salary);
    return 0;
}