#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Odd row: A to whatever based on n
            for (int j = 0; j < n; j++) {
                printf("%c", 'A' + j);
            }
        } else {
            // Even row: reverse from (A + n - 1) to A
            for (int j = 0; j < n; j++) {
                printf("%c", 'A' + (n - 1 - j));
            }
        }
        printf("\n");
    }

    return 0;
}
