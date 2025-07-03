#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a binary string: ");
    scanf("%s", str);
    int maxLen = 0;
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        int count0 = 0, count1 = 0;
        for (int j = i; j < n; j++) {
            if (str[j] == '0')
                count0++;
            else if (str[j] == '1')
                count1++;
            if (count0 == count1) {
                int len = j - i + 1;
                if (len > maxLen)
                    maxLen = len;
            }
        }
    }
    printf("Longest substring length with equal 0s and 1s: %d\n", maxLen);
    return 0;
}
