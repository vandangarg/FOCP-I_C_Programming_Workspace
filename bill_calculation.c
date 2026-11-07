#include <stdio.h>
int main(void)
{

    float price;
    int quantity;

    printf("Enter the price of the item: \n");
    if(scanf("%f", &price)!=1){
        printf("Please enter price only\n");
        return 1; 

    }
    printf("Enter the Quantity: \n");
    if(scanf("%d", &quantity)!=1){
        printf("Please enter quantity only\n");
        return 1;

    }

    printf("Your total bill is: %.2fRs", price*quantity);

    return 0;


}