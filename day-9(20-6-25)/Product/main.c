#include <stdio.h>

int main() {
    int num = 1234, product = 1;

    while (num > 0) {
        product *= num % 10;  
        num /= 10;            
    }

    printf("%d\n", product);
    return 0;
}
