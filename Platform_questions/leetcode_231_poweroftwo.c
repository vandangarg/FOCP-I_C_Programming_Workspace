#include <stdio.h>

int isPowerOfTwo(int n) {
    if (n > 0 && (n & (n - 1)) == 0) {
        return 1; // true
    }
    return 0;     // false
}
