
#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        int temp = n, count = 0;
        while (temp > 0) {
            int d = temp % 10;
            if (d != 0 && n % d == 0) count++;
            temp /= 10;
        }
        printf("%d\n", count);
    }
    return 0;
}
