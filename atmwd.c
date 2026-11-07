#include <stdio.h>
int main(void)
{

    int pin;
    int amount;
    int balance;

    printf("Enter pin: ");
    scanf("%d", &pin);
    printf("Enter Amount: ");
    scanf("%d", &amount);
    printf("Enter balance: ");
    scanf("%d", &balance);

    if(pin==1234){
        if(amount%100==0){
            if(amount<=balance){
                if(amount>0){
                    printf("Withdrawl Succesful");}

                else{
                printf("Invalid Amount");
                            }}

            else{
            printf("Insufficient Balance");
                             }}
        else{
        printf("Invalid Amount");
                        }}
    else{
    printf("Invalid Pin");
    }

    return 0;

}