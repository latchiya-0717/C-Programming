#include <stdio.h>

int main()
{
    int num=1234,num1=0;
    while (num!=0)
    {
        num1=(num1*10)+(num%10);
        num/=10;
        
    }
    if(num==num1){
        printf("It is a Palindrome");
    }
    else{
        printf("It is not a Palindrome");
    }
    
    return 0;
}
