#include <stdio.h>

int main()
{
    int a=10;
    int *p=&a;
    int **p1=&p;
    printf("Address of A %p\n",p);
    printf("Address of P %p\n",p1);
    printf("Value of A %d\n",**p1);
    
    return 0;
}