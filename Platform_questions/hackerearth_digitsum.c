#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int ch;
        int first_digit = -1;
        int last_digit = -1;

       
        while ((ch = getchar()) != EOF && (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r'));

      
        while (ch >= '0' && ch <= '9') {
            if (first_digit == -1) {
                first_digit = ch - '0';
            }
            last_digit = ch - '0';
            ch = getchar();
        }

        if (first_digit != -1) {
            printf("%d\n", first_digit + last_digit);
        }
    }

    return 0;
}

