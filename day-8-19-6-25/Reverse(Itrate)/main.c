#include <stdio.h>

int main()
{
    int num=1234,num1=0;
    while (num!=0)
    {
        num1=(num1*10)+(num%10);
        num/=10;
        //printf("%d\n",num1);//print in loop itrate
        
        
    }
    printf("%d\n",num1);
    return 0;
}
