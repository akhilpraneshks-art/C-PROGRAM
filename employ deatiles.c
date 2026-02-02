#include <stdio.h>
#include <string.h>
struct Department {
    char deptName[50];
    int deptID;
};
struct Employee {
    int empID;
    char empName[50];
    struct Department dept; 
};
int main() {
    struct Employee emp;
    struct Employee *ptr = &emp;
    printf("Enter Employee ID: ");
    scanf("%d", &ptr->empID);
    printf("Enter Employee Name: ");
    scanf("%s",&ptr->empName);
    printf("Enter Department Name: ");
    scanf("%s",&ptr->dept.deptName);
    printf("Enter Department ID: ");
    scanf("%d", &ptr->dept.deptID);
    printf("\n Employee Records\n");
    printf("ID: %d\n", ptr->empID);
    printf("Name: %s\n", ptr->empName);
    printf("Dept Name: %s\n", ptr->dept.deptName);
    printf("Dept ID: %d\n", ptr->dept.deptID);
    return 0;
}