#include <stdio.h>
int main(void)
{

    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

     printf("Enter b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a , b);
    printf("After swapping: a = %d, b = %d", b , a);

    return 0;

    
}