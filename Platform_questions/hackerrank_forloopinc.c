#include <stdio.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    static const char *names[] = {
        "", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", names[i]);
        } else {
            printf("%s\n", (i % 2 == 0) ? "even" : "odd");
        }
    }
    return 0;
}

