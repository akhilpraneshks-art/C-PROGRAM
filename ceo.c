#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Employee {
    char designation[50];
    struct Employee* left;
    struct Employee* right;
} Employee;
Employee* createEmployee(char* name) {
    Employee* newEmployee = (Employee*)malloc(sizeof(Employee));
    if (newEmployee != NULL) {
        strcpy(newEmployee->designation, name);
        newEmployee->left = NULL;
        newEmployee->right = NULL;
    }
    return newEmployee;
}
int main() {
    Employee* CEO = createEmployee("CEO");
    Employee* Manager1 = createEmployee("Manager1");
    Employee* Manager2 = createEmployee("Manager2");
    Employee* TeamLead1 = createEmployee("TeamLead1");
    Employee* TeamLead2 = createEmployee("TeamLead2");
    CEO->left = Manager1;
    CEO->right = Manager2;
    Manager1->left = TeamLead1;
    Manager1->right = TeamLead2;
    printf("CEO: %s\n", CEO->designation);
    printf("Left Manager: %s\n", CEO->left->designation);
    printf("Right team lead under manager1: %s\n", CEO->left->right->designation);
    free(CEO);
    free(Manager1);
    free(Manager2);
    free(TeamLead1);
    free(TeamLead2);
    return 0;
}