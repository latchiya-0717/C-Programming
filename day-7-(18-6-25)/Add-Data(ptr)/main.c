#include <stdio.h>

int main()
{
    int a=10;
    int *ptr=&a;
    printf("%p\n",ptr);//address
    printf("%p\n",&a);//address
    printf("%d\n",*ptr);//data
    printf("%d\n",a);//data
    // int *p = 100;


    return 0;
}

