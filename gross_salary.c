#include <stdio.h>

int main()
{
    int net_salary, tax_deduction, gross;
    printf("Enter NET SALARY\n");
    scanf("%d", &net_salary);

    printf("Enter TAX Deduction VALUE\n");
    scanf("%d", &tax_deduction);

    gross = net_salary - tax_deduction;
    printf("GROSS SALARY of the employee is %d Rs",gross);
    return 0;
}