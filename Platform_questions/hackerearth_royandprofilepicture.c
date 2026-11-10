
#include <stdio.h>

int main(void) {
    int L, N, W, H;
    if (scanf("%d %d", &L, &N) != 2) return 0;
    while (N--) {
        scanf("%d %d", &W, &H);
        if (W < L || H < L) {
            printf("UPLOAD ANOTHER\n");
        } else if (W == H) {
            printf("ACCEPTED\n");
        } else {
            printf("CROP IT\n");
        }
    }
    return 0;
}

