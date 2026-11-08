#include <stdio.h>
int main(void)
{

    int n;

    printf("Enter an Integer: ");
    scanf("%d", &n);

    if(n%5==0 && n%2==0){
    printf("Special");}
    else if(n%5==0 && n%2!=0)
    {printf("Five");}
    else if(n%5!=0 && n%2==0)
    {printf("Even");}
    else
    {printf("Odd/Other");}

    return 0;
}