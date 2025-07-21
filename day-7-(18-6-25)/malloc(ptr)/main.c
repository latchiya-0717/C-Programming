#include <stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr=malloc(sizeof(int));;
    *ptr=10;
    printf("%p\n",ptr);//address
    //printf("%p\n",&a);//address
    printf("%d\n",*ptr);//data
    //printf("%d\n",a);//data
    // int *p = 100;


    return 0;
}

