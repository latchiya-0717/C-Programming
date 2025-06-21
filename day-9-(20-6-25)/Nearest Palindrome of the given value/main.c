// #include <stdio.h>

// int main() {
//     int n ;
//     printf("Enter the value:");
//     scanf("%d", &n);
//     int num = n - 1;
//     while (1) {
//         int temp = num;
//         int rev = 0;
//         while (temp > 0) {
//             rev = rev * 10 + temp % 10;
//             temp /= 10;
//         }
//         if (rev == num) {
//             printf("%d\n", num);
//             break;
//         }
//         num--;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num=1234,num1=0;
//     while (num!=0)
//     {
//         num1=(num1*10)+(num%10);
//         num/=10;
        
//     }
//     if(num==num1){
//         printf("It is a Palindrome");
//     }
//     else{
//         printf("It is not a Palindrome");
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value: ");
    
    // Check if scanf succeeded in reading an integer
    if (scanf("%d", &n) != 1) {
        // If scanf fails, print an error message and return
        printf("Error reading value.\n");
        return 1; // Return a non-zero value for error
    }
    
    int num = n - 1; // Initialize num based on the value of n
    while (1) {
        int temp = num; // Initialize temp to num
        int rev = 0; // Initialize rev to 0 for each new number

        // Start reversing the number
        while (temp > 0) { 
            rev = rev * 10 + temp % 10; // Build the reversed number
            temp /= 10; // Remove the last digit
        }
        
        // Check if the original number is equal to its reverse
        if (rev == num) {
            printf("%d\n", num); // Print the palindrome number
            break; // Exit the loop once found
        }
        num--; // Decrease num to check the next lower number
    }
    
    return 0; // Return 0 to indicate successful execution
}