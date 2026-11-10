
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int grade;
        scanf("%d", &grade);

        if (grade >= 38 && (grade % 5) >= 3) {
            grade += 5 - (grade % 5);
        }

        printf("%d\n", grade);
    }

    return 0;
}
