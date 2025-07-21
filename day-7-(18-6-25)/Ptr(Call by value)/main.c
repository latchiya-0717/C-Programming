#include <stdio.h>
void add(int a, int b)
{
    printf("%d\n",a+b);
}

int main()
{

    int a=10,b=9;
    add(a,b);
    printf("%d,%d",a,b);

    
    return 0;
}

