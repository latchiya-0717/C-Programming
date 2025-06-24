#include <stdio.h>

int main() {
    int arr[] = {1,2,2,2,2,1,4,1,4,4};
    int n = 10;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == i) {
            int count = 1;
            for (int k = i + 1; k < n; k++) {
                if (arr[i] == arr[k]) {
                    count++;
                }
            }
            if (count > 1) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}