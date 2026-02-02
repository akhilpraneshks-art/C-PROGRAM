#include <stdio.h>
struct Employee {
    int empId;
    float salary;
};
int main() {
    struct Employee emp[5];   
    int i;

    for (i = 0; i <= 5; i++) {
        printf("enter details for employee %d\n", i + 1);
        printf("employee id: ");
        scanf("%d", &emp[i].empId);
        printf("salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
    printf("employee details:\n");
    for (i = 0; i <=5; i++) {
        printf("employee %d\n", i + 1);
        printf("id: %d\n", emp[i].empId);
        printf("salary: %f\n", emp[i].salary);
    }
    return 0;
}