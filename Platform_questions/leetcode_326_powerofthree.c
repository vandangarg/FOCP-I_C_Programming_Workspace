#include <stdio.h>

int isPowerOfThree(int n) {
    
    if (n > 0 && 1162261467 % n == 0) {
        return 1; 
    }
    return 0;    
}
