#include <stdio.h>
int main(void)
{

    double a, b;
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter an operator(+,-,/,*,%%): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
        printf("%lf + %lf = %.2lf", a , b , a+b);
        break;

        case'-':
        printf("%lf - %lf = %.2lf", a, b, a-b);
        break;

        case'*':
        printf("%lf * %lf = %.2lf", a, b, a*b);
        break;

        case'%':
        if((int)b==0)
        printf("Error: Second Number cannot be Zero");
        else
        printf("%lf %% %lf = %d", a, b, (int)a%(int)b);    
        break;

        case'/':
        if(b==0)
        printf("Error: Second Number cannot be Zero");
        else
        printf("%lf / %lf = %.2lf", a, b, a/b);
        break;

        default:
        printf("'%c' is not a valid operator", operator);
        break;

    }

    return 0;



}