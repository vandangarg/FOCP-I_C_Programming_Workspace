#include <stdio.h>
int main(void)
{

    int a, b, c;

    printf("Enter First Integer: ");
    scanf("%d", &a);

    printf("Enter Second Integer: ");
    scanf("%d", &b);

    printf("Enter Third Integer: ");
    scanf("%d", &c);

    if(a>=b && a<=c)
    printf("%d", a);

    else  if(c>=b && c<=a)
    printf("%d", c);

    else 
    printf("%d", b);

return 0;




}