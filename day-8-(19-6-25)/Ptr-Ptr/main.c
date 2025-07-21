#include <stdio.h>

int main()
{
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    int ***p3=&p2;
    int ****p4=&p3;
    printf("Address of p1%p\n",&p1);
    printf("Address of p2%p\n",&p2);
    printf("Address of p3%p\n",&p3);
    printf("Address of p4%p\n",&p4);
    printf("Address of a%p\n",&a);
    //printf("%d\n",**p2);
    printf("%d\n",***p3);
    // printf("%p\n",&p4);
    // printf("%d\n",*p1);
    // printf("%d\n",***p3);
    // printf("%p\n",&p2);
    //printf("%d\n",*a);

    
    return 0;
}