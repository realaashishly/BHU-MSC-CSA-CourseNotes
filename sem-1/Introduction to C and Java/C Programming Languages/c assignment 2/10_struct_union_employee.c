#include <stdio.h>
struct Employee {
    int id;
    char name[30];
    float salary;
};
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    int n = 3, i, maxIndex = 0;
    struct Employee emp[3] = {
        {101, "Ravi", 45000},
        {102, "Priya", 52000},
        {103, "Amit", 38000}
    };
    for (i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary)
            maxIndex = i;
    }
    printf("Employee with Highest Salary:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n",
           emp[maxIndex].id, emp[maxIndex].name,
           emp[maxIndex].salary);
    printf("Size of struct Employee: %zu bytes\n",
           sizeof(struct Employee));
    printf("Size of union Data: %zu bytes\n",
           sizeof(union Data));
    printf("In struct, all members have separate memory.\n");
    printf("In union, all members share same memory.\n");
    return 0;
}
