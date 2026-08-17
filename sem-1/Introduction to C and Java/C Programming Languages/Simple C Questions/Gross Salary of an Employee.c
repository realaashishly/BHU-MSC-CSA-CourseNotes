#include <stdio.h>

int main(void){
float basicSalary, hra, otherAllowances, grossSalary;
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &hra);

    printf("Enter Other Allowances: ");
    scanf("%f", &otherAllowances);

    grossSalary = basicSalary + hra + otherAllowances;

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary     : %.2f\n", basicSalary);
    printf("HRA              : %.2f\n", hra);
    printf("Other Allowances : %.2f\n", otherAllowances);
    printf("-------------------------\n");
    printf("Total Gross Salary: %.2f\n", grossSalary);
    
    return 0;
}