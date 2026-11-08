#include <stdio.h>
int main(void)
{
    int quantity;
    float price, discount;
    char id[20];

    printf("Enter the Product ID: ");
    scanf("%s", &id);

    printf("Enter the Product Price: ");
    scanf("%f", &price);

    printf("Enter the Quantity: ");
    scanf("%d", &quantity);

    printf("Enter the Discount Percentage: ");
    scanf("%f", &discount);

    float subtotal = price * quantity;
    float discount_amount = subtotal * discount / 100;
    float final_amount = subtotal - discount_amount;

    printf("--------------------------------------\n");
    printf("              Invoice\n");
    printf("--------------------------------------\n");
    printf("Product ID           : %s\n", id);
    printf("Subtotal             : %.2f\n", subtotal);
    printf("Discount Amount      : %.2f\n", discount_amount);
    printf("Final Payable Amount : %.2f\n", final_amount);
    printf("--------------------------------------\n");

    return 0;

}