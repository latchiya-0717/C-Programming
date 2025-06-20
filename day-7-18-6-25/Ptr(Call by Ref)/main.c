#include <stdio.h>
void hiii(int *pt)
{
    *pt+=1;
}
void hello(char *pt)
{
    *pt+=1;
}

int main()
{

    int a=10;
    char ch='D';
    hiii(&a);
    hello(&ch);
    printf("%d\n",a);
    printf("%c",ch);
    
    return 0;
}

