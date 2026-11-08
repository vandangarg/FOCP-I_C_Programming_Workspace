#include <stdio.h>
int main(void)
{

    int a , b , c; 
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter third integer: ");
    scanf("%d", &c);

    printf("Average: %.2f", (a+b+c)/3.0);

    return 0;

}