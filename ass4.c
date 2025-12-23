#include <stdio.h>
int main() {
    
    char name[20];
    float B_salary, HRA, DA, I_tax, G_Salary, N_Salary;

    // Input name of the employee and Basic Salary
    printf("Enter employee name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter basic salary: ");
    scanf("%f", &B_salary);

    HRA = 0.20 * B_salary;
    printf("HRA = %.2f\n", HRA);

    DA = 0.10 * B_salary;
    printf("DA = %.2f\n", DA);

    G_Salary = B_salary + HRA + DA;
    printf("Gross Salary = %.2f\n", G_Salary);

    I_tax = 0.05 * G_Salary;
    printf("Income Tax = %.2f\n", I_tax);

    N_Salary = G_Salary - I_tax;
    printf("Net Salary = %.2f\n", N_Salary);
    return 0; 
}
