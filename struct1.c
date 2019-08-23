#include <stdio.h>
#include <stdlib.h>
// This program displays name, hire date and salary of an employee using structures


int main()
{   struct employee
{   char name[20];
    int hireDate;
    float salary;} person2;

    struct employee person1 = {"abc", 25, 35.67};
    printf("Employee name %s, hire date %i, salary %.2f.\n", person1.name, person1.hireDate, person1.salary);

    printf("Enter details:\n");
    scanf("%s %i %f", person2.name, &person2.hireDate, &person2.salary);

    printf("Employee name %s, hire date %i, salary %.2f.\n", person2.name, person2.hireDate, person2.salary);

    return 0;
}
