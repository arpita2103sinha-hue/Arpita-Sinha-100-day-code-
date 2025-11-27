#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee *emp = (struct Employee *) malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter Employee Name: ");
    scanf("%s", emp->name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", emp->name);
    printf("ID     : %d\n", emp->id);
    printf("Salary : %.2f\n", emp->salary);
    free(emp);

    return 0;
}

