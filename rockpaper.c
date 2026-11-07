#include <stdio.h>
int main(void)
{

    int play1;
    int play2;

    printf("1->Rock\n2->Paper\n3->Scissor\n");
    printf("Player 1: ");
    scanf("%d", &play1);
    printf("Player 2: ");
    scanf("%d", &play2);

    if(play1==1)
    switch (play2){

        case 1:
        printf("Draw");
        break;

        case 2:
        printf("Player 2 Wins");
        break;

        case 3:
        printf("Player 1 Wins");
        break;

        default:
        printf("Invalid Input");
        break;

    }

    else if(play1==2)
    switch (play2){

        case 1:
        printf("Player 1 Wins");
        break;

        case 2:
        printf("Draw");
        break;

        case 3:
        printf("Player 2 Wins");
        break;

        default:
        printf("Invalid Input");
        break;

    }

    else if(play1==3)
    switch (play2){

        case 1:
        printf("Player 2 Wins");
        break;

        case 2:
        printf("Player 1 Wins");
        break;

        case 3:
        printf("Draw");
        break;

        default:
        printf("Invalid Input");
        break;


    }

    else
    printf("Invalid Input");

    return 0;




}