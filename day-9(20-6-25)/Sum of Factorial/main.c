#include <stdio.h>

int main()
{
    int num, rem, i, fact, sum = 0;
    printf("Enter the value:");
    scanf("%d", &num);      

    while (num > 0) {      
        rem = num % 10;  
        fact = 1;

        for (i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;         
        num /= 10;           
    }

    printf("%d\n", sum);    
    return 0;
}
