#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int isRight = 1, isLeft = 1;

    for (int i = 0; i < n && isRight; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != 0) {
                isRight = 0;
                break;
            }
        }
    }
    for (int i = 0; i < n && isLeft; i++) {
        for (int j = n - i; j < n; j++) {
            if (mat[i][j] != 0) {
                isLeft = 0;
                break;
            }
        }
    }
    printf("\nResult: ");
    if (isRight)
        printf("Right-Angle Triangle\n");
    else if (isLeft)
        printf("Left-Angle Triangle\n");
    else
        printf("No Triangle\n");

    return 0;
}
