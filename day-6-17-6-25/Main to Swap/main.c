#include <stdio.h>
//function definition
int swap(int a,int b) //void means denote swap as 0
{

    a=a^b;
    b=a^b;
    a=a^b;

    return a;
}

int main()
{
    int a=5,b=7;
    //function call
    printf("%d",swap(a,b));
    return 0;
}

