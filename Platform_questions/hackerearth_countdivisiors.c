#include <stdio.h>

int main(void) {
    int l, r, k;
    if (scanf("%d %d %d", &l, &r, &k) != 3) return 0;
    printf("%d\n", (r / k) - ((l - 1) / k));
    return 0;
}

