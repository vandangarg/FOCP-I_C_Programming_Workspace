#include <stdio.h>
int main(void)
{
    float salary, bonus, allowance;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    printf("Enter Allowance: ");
    scanf("%f", &allowance);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    printf("Final Salary: %.2fRs", salary + bonus + allowance);

    return 0;
}