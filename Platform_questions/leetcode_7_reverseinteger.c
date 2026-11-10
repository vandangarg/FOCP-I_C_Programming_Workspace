#include <stdio.h>

int reverse(int x) {
    int rev = 0;
    

    const int MAX_LIMIT = 2147483647;
    const int MIN_LIMIT = -2147483648;

    while (x != 0) {
        int pop = x % 10;
        x /= 10;

        
        if (rev > MAX_LIMIT / 10 || (rev == MAX_LIMIT / 10 && pop > 7)) {
            return 0;
        }

        
        if (rev < MIN_LIMIT / 10 || (rev == MIN_LIMIT / 10 && pop < -8)) {
            return 0;
        }

        rev = rev * 10 + pop;
    }

    return rev;
}


