#include <stdio.h>

int main()
{
    int a=20;
    int *pointer = &a;
    char ch='A';
    char *charptr=&ch;
    printf("%d\n",a);
    printf("%p",&a);
    return 0;
}

