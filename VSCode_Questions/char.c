#include <stdio.h>
int main(void)
{

    char digit;

    printf("Enter a Character: ");
    scanf(" %c", &digit);

    if(digit >='A' && digit <='Z' || digit >='a' && digit <='z'){


    switch(digit){
        case 'a': case 'A':
        case 'e': case 'E':
        case 'u': case 'U':
        case 'i': case 'I':
        case 'o': case 'O':
        printf("Vowel");
        break;
        default:
        printf("Consonant");
        break;
    } 
}
else if(digit>='0' && digit<='9')
printf("Digit");

else
printf("Special Character");

return 0;

} 