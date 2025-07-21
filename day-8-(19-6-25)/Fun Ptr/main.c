#include <stdio.h>

void hello()
{
    printf("Hello\n");
}
int main()
{
    void(*funptr)()=hello;
    funptr();
    printf("%p",funptr);

    return 0;
}
