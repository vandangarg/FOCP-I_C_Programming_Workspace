#include <stdio.h>
int main(void)
{

    int unit;

    printf("Enter the Units consumed: ");
    scanf("%d", &unit);

    if(unit<=100)
    printf("%dRs", unit * 2);
    else if(unit<=200)
    printf("%dRs", 200 + ((unit-100)*3));
    else
    printf("%dRs", 500 + ((unit - 200)*5));

    return 0;

}