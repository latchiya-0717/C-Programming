#include <stdio.h>

int main()
{
    int a=1234,count=0;
    while (a>0)
    {
        count++;
        a/=10;
    }
    printf("%d\n",count);

    return 0;
}



