// Structure Employee: read and display one employee's details.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(void) {
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter name: ");
    scanf(" %49[^\n]", e.name);
    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\nEmployee Details\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n",
           e.id, e.name, e.salary);
    return 0;
}
