#include <stdio.h>

int main()
{
    int num=1234;
    while (num>0)
    {
        printf("%d\n",num);
        printf("%d\n",num%10);
        num/=10;
    }

    return 0;
}
