#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // Input number of rows
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // Odd row: A to (A + i - 1)
            for (int j = 0; j < i; j++) {
                printf("%c", 'A' + j);
            }
        } else {
            // Even row: reverse from (A + i - 1) to A
            for (int j = 0; j < i; j++) {
                printf("%c", 'A' + (i - 1 - j));
            }
        }
        printf("\n");
    }
    return 0;
}