#include <stdio.h>
//function definition
int swap(int a, int b) //void means denote swap as 0
{

    a=a^b;
    b=a^b;
    a=a^b;

    return a;
}

int main()
{
    
    //function call
    printf("%d",swap(10,6));
    printf("%d",swap(14,26));
    printf("%d",swap(16,76));
    return 0;
}

